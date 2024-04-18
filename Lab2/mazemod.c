/*
 * Lab problem set for UNIX programming course
 * by Chun-Ying Huang <chuang@cs.nctu.edu.tw>
 * License: GPLv2
 */
#include <linux/module.h> // included for all kernel modules
#include <linux/kernel.h> // included for KERN_INFO
#include <linux/init.h>	  // included for __init and __exit macros
#include <linux/proc_fs.h>
#include <linux/seq_file.h>
#include <linux/errno.h>
#include <linux/sched.h>   // task_struct requried for current_uid()
#include <linux/cred.h>	   // for current_uid();
#include <linux/slab.h>	   // for kmalloc/kfree
#include <linux/uaccess.h> // copy_to_user
#include <linux/string.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/random.h>

#include "maze.h"
static DEFINE_MUTEX(mutexlock);
static DEFINE_MUTEX(mutexlock2);

static dev_t devnum;
static struct cdev c_dev;
static struct class *clazz;
char *buff;
char *maze1;
char *maze2;
char *maze3;
bool m1 = 0, m2 = 0, m3 = 0;
int flag = 0;
bool *maze;
char *tmp;
char *label;
int pid1 = 0, pid2 = 0, pid3 = 0, user = 0;
coord_t maze_start, maze_current, maze_end, maze_size, maze_move, maze_reset;
coord_t size1, start_1, current_1, end_1;
coord_t size2, start_2, current_2, end_2;
coord_t size3, start_3, current_3, end_3;
coord_t seq_[64];
int s, e, c;
int cnt = 0;

static int mazemod_dev_open(struct inode *i, struct file *f)
{
	// printk(KERN_INFO "mazemod: device opened.\n");

	return 0;
}

static int mazemod_dev_close(struct inode *i, struct file *f)
{

	mutex_lock(&mutexlock2);

	int cur = (int)task_pid_nr(current);
	// printk("%d %d %d %d %d",cur,user,pid1,pid2,pid3);
	if(cur == pid1){
		user--;
		m1 = 0;
		memset(maze1, '\0', 1000);
		memset(maze, 0, 1000);
		memset(tmp, '\0', 1000);
	}else if(cur == pid2){
		user--;
		m2 = 0;
		memset(maze2, '\0', 1000);
	}else if(cur == pid3){
		user--;
		m3 = 0;
		memset(maze3, '\0', 1000);
	}
	// printk("%d %d",cur,user);
	mutex_unlock(&mutexlock2);

	// printk(KERN_INFO "mazemod: device closed.\n");
	return 0;
}

static ssize_t mazemod_dev_read(struct file *f, char __user *buf, size_t len, loff_t *off)
{

	if(!m1){
		return -EBADFD;
	}
	len = maze_size.x * maze_size.y;
	// printk("%ld",(long unsigned int)len);
	if (copy_to_user(buf, maze, (long unsigned int)len))
	{
		return -EBUSY;
	}

	return len;
}

static ssize_t mazemod_dev_write(struct file *f, const char __user *buf, size_t len, loff_t *off)
{
	// printk(KERN_INFO "mazemod: write %zu bytes @ %llu.\n", len, *off);

	if (copy_from_user(&seq_, (int32_t *)buf, sizeof(seq_)))
	{
		return -EBUSY;
	}
	if(sizeof(seq_) != sizeof(coord_t)*64){
		return -EINVAL;
	}
	if (maze_size.x <= 3 && maze_size.y <= 3)
	{
		return -ENOENT;
	}
	for (int i = 0; i < 64; i++)
	{
		if (maze[((maze_current.y + seq_[i].y) * maze_size.x) + (maze_current.x + seq_[i].x)] != 1)
		{
			maze_current.x = maze_current.x + seq_[i].x;
			maze_current.y = maze_current.y + seq_[i].y;
		}
	}
	return len;
}

void CarveMaze(int width, int height, int x, int y)
{


	int random_dir, count=0;
	coord_t dirr, d1 , d2;

	random_dir = get_random_u32() % 4;

	while (count < 4)
	{

		if(random_dir == 0){
			dirr.x = -1;
			dirr.y = 0;
		}
		else if(random_dir == 1){
			dirr.x = 1;
			dirr.y = 0;
		}
		else if(random_dir == 2){
			dirr.x = 0;
			dirr.y = -1;
		}
		else{
			dirr.x = 0;
			dirr.y = 1;
		}

		//run two block one time
		d1.x = x + dirr.x;
		d1.y = y + dirr.y;
		d2.x = d1.x + dirr.x;
		d2.y = d1.y + dirr.y;

		if(d2.x <= 0 || d2.y <= 0 || d2.x >= width || d2.y >= height){
			//change dir
			random_dir = (random_dir+1)%4;
			count++;
		}
		else if(maze[d1.y * width + d1.x] && maze[d2.y * width + d2.x]){
			// Carve the walls between d1 and d2 to create a passage
			maze[d1.y * width + d1.x] = 0;
			maze[d2.y * width + d2.x] = 0;

			//cnt : calculate the num of blanks(road)
			cnt += 2;
			random_dir = get_random_u32() % 4;
			x = d2.x;
			y = d2.y;
			count = 0;
		}
		else{
			random_dir = (random_dir+1)%4;
			count++;
		}
	}
}

static char *create_maze(coord_t value)
{
	int x, y;

	int i = 0, time = 10;
	int blank_num = 0;

	/* Initialize the maze. */
	for (x = 0; x < value.x * value.y; x++)
	{
		maze[x] = 1;
	}

	maze[1 * value.x + 1] = 0;

	/* Carve the maze. */
	cnt = 0;
	for (y = 1; y < value.y; y += 2)
	{
		for (x = 1; x < value.x; x += 2)
		{
			CarveMaze(value.x, value.y, x, y);
		}
	}


	s = get_random_u32() % cnt;
	c = s;

	e = get_random_u32() % cnt;

	while(s == e){
		e = get_random_u32() % cnt;
		if(time-- < 0) {
			time = 10;
			break;
		}
	}
	

	for (y = 0; y < value.y; y++)
	{
		if (y < 10)
			snprintf(label, 10, "- 00%d: ", y);
		else if (y >= 10 && y < 100)
			snprintf(label, 10, "- 0%d: ", y);
		else
			snprintf(label, 10, "- %d: ", y);

		if (y == 0)
			strcpy(tmp, label);
		else
			strcat(&tmp[i], label);


		i += 7;

		for (x = 0; x < value.x; x++)
		{
			if (maze[y * value.x + x])
				tmp[i] = '#';
			else
			{
				if (blank_num == c)
				{
					tmp[i] = '*';
					maze_current.y = y;
					maze_current.x = x;
					if (blank_num == s)
					{
						maze_start.y = y;
						maze_start.x = x;
					}
				}
				else if (blank_num == s)
				{
					tmp[i] = 'S';
					maze_start.y = y;
					maze_start.x = x;
				}
				else if (blank_num == e)
				{
					tmp[i] = 'E';
					maze_end.x = x;
					maze_end.y = y;
				}
				else
					tmp[i] = '.';
				blank_num++;
			}
			i++;
		}

		tmp[i] = '\n';
		i++;
	}
	tmp[i] = '\0';
	i = 0;
	return tmp;
}

static long mazemod_dev_ioctl(struct file *fp, unsigned int cmd, unsigned long arg)
{

	mutex_lock(&mutexlock);


	switch (cmd)
	{
	case MAZE_CREATE:
		if (user >= _MAZE_MAXUSER)
		{
			mutex_unlock(&mutexlock);
			return -ENOMEM;
		}
		if (pid1 != (int)task_pid_nr(current) &&
			pid2 != (int)task_pid_nr(current) &&
			pid3 != (int)task_pid_nr(current))
			user++;
		else
		{
			mutex_unlock(&mutexlock);
			return -EEXIST;
		}

		if (copy_from_user(&maze_size, (int32_t *)arg, sizeof(maze_size)))
		{
			mutex_unlock(&mutexlock);
			return -EBUSY;
		}

		if (maze_size.x <= 3 && maze_size.y <= 3)
		{
			//cuz close file need pid to "user--"
			pid1 = (int)task_pid_nr(current);
			mutex_unlock(&mutexlock);
			return -EINVAL;
		}

		if (!m1)
		{
			m1 = 1;
			memset(maze, 0, 1000);
			memset(tmp, '\0', 1000);
			strcpy(maze1, create_maze(maze_size));
			pid1 = (int)task_pid_nr(current);
			size1 = maze_size;
			start_1 = maze_start;
			end_1 = maze_end;
			current_1 = maze_current;
		}
		else if (!m2)
		{
			m2 = 1;
			memset(maze, 0, 1000);
			memset(tmp, '\0', 1000);

			strcpy(maze2, create_maze(maze_size));

			pid2 = (int)task_pid_nr(current);
			size2 = maze_size;
			start_2 = maze_start;
			end_2 = maze_end;
			current_2 = maze_current;
		}
		else if (!m3)
		{
			m3 = 1;
			memset(maze, 0, 1000);
			memset(tmp, '\0', 1000);
			strcpy(maze3, create_maze(maze_size));
			pid3 = (int)task_pid_nr(current);
			size3 = maze_size;
			start_3 = maze_start;
			end_3 = maze_end;
			current_3 = maze_current;
		}
		break;

	case MAZE_GETSIZE:
		if (maze_size.x <= 3 && maze_size.y <= 3)
		{
			mutex_unlock(&mutexlock);

			return -ENOENT;
		}
		if (copy_to_user((int32_t *)arg, &maze_size, sizeof(maze_size)))
		{
			mutex_unlock(&mutexlock);

			return -EBUSY;
		}
		break;

	case MAZE_GETSTART:

		// havent put 'there is no maze's' situation, i not sure this will work
		if (maze_size.x <= 3 && maze_size.y <= 3)
		{
			mutex_unlock(&mutexlock);

			return -ENOENT;
		}
		if (copy_to_user((int32_t *)arg, &maze_start, sizeof(maze_start)))
		{
			mutex_unlock(&mutexlock);

			return -EBUSY;
		}
		break;
	case MAZE_GETEND:
		if (maze_size.x <= 3 && maze_size.y <= 3)
		{
			mutex_unlock(&mutexlock);

			return -ENOENT;
		}
		if (copy_to_user((int32_t *)arg, &maze_end, sizeof(maze_end)))
		{
			mutex_unlock(&mutexlock);

			return -EBUSY;
		}
		break;
	case MAZE_GETPOS:

		// havent put 'there is no maze's' situation, i not sure this will work
		if (maze_size.x <= 3 && maze_size.y <= 3)
		{
			mutex_unlock(&mutexlock);

			return -ENOENT;
		}
		if (copy_to_user((int32_t *)arg, &maze_current, sizeof(maze_current)))
		{
			mutex_unlock(&mutexlock);
			return -EBUSY;
		}

		break;
	case MAZE_DESTROY:
		if (maze_size.x <= 3 && maze_size.y <= 3)
		{
			mutex_unlock(&mutexlock);

			return -ENOENT;
		}

		memset(maze1, '\0', 1000);
		memset(maze, 0, 1000);
		memset(tmp, '\0', 1000);

		m1 = 0;
		m2 = 0;
		m3 = 0;
		break;
	case MAZE_MOVE:
		// (-1, 0), (1, 0), (0, -1), and (0, 1)
		if (copy_from_user(&maze_move, (int32_t *)arg, sizeof(maze_move)))
		{
			mutex_unlock(&mutexlock);

			return -EBUSY;
		}

		if (!((maze_move.x == -1 && maze_move.y == 0) ||
			  (maze_move.x == 1 && maze_move.y == 0) ||
			  (maze_move.x == 0 && maze_move.y == -1) ||
			  (maze_move.x == 0 && maze_move.y == 1)))
		{
			mutex_unlock(&mutexlock);

			return -EBUSY;
		}

		// havent put 'there is no maze's' situation, i not sure this will work
		if (maze_size.x <= 3 && maze_size.y <= 3)
		{
			mutex_unlock(&mutexlock);

			return -ENOENT;
		}

		// y * value.x + x
		maze_reset = maze_current;

		if (maze[((maze_current.y + maze_move.y) * maze_size.x) + (maze_current.x + maze_move.x)] == 1)
		{
			mutex_unlock(&mutexlock);

			return -EBUSY;
		}
		else
		{
			current_1.x = maze_current.x + maze_move.x;
			current_1.y = maze_current.y + maze_move.y;
			maze_current = current_1;
			if (copy_to_user((int32_t *)arg, &current_1, sizeof(current_1)))
			{
				mutex_unlock(&mutexlock);

				return -EBUSY;
			}
		}
		break;
	case MAZE_RESET:
		if (maze_size.x <= 3 && maze_size.y <= 3)
		{
			mutex_unlock(&mutexlock);

			return -ENOENT;
		}
		break;

	default:
		break;
	}
	mutex_unlock(&mutexlock);

	return 0;
}

static const struct file_operations mazemod_dev_fops = {
	.owner = THIS_MODULE,
	.open = mazemod_dev_open,
	.read = mazemod_dev_read,
	.write = mazemod_dev_write,
	.unlocked_ioctl = mazemod_dev_ioctl,
	.release = mazemod_dev_close};

static int mazemod_proc_read(struct seq_file *m, void *v)
{

	if (!m1)
	{
		seq_printf(m, "#00: vacancy\n\n");
	}
	else
	{
		snprintf(buff, 1000, "#00: pid %d - [%d x %d]: (%d, %d) -> (%d, %d) @ (%d, %d)\n", pid1, size1.x, size1.y, start_1.x, start_1.y, end_1.x, end_1.y, current_1.x, current_1.y);
		strcat(buff, maze1);
		strcat(buff, "\n");
		seq_printf(m, buff);
	}
	if (!m2)
	{
		seq_printf(m, "#01: vacancy\n\n");
	}
	else
	{

		snprintf(buff, 1000, "#01: pid %d - [%d x %d]: (%d, %d) -> (%d, %d) @ (%d, %d)\n", pid2, size2.x, size2.y, start_2.x, start_2.y, end_2.x, end_2.y, current_2.x, current_2.y);
		strcat(buff, maze2);
		strcat(buff, "\n");
		seq_printf(m, buff);
	}

	if (!m3)
	{
		seq_printf(m, "#02: vacancy\n\n");
	}
	else
	{
		snprintf(buff, 1000, "#02: pid %d - [%d x %d]: (%d, %d) -> (%d, %d) @ (%d, %d)\n", pid3, size3.x, size3.y, start_3.x, start_3.y, end_3.x, end_3.y, current_3.x, current_3.y);
		strcat(buff, maze3);
		strcat(buff, "\n");
		seq_printf(m, buff);

	}

	return 0;
}

static int mazemod_proc_open(struct inode *inode, struct file *file)
{
	return single_open(file, mazemod_proc_read, NULL);
}

static const struct proc_ops mazemod_proc_fops = {
	.proc_open = mazemod_proc_open,
	.proc_read = seq_read,
	.proc_lseek = seq_lseek,
	.proc_release = single_release,
};

static char *mazemod_devnode(const struct device *dev, umode_t *mode)
{
	if (mode == NULL)
		return NULL;
	*mode = 0666;
	return NULL;
}

static int __init mazemod_init(void)
{
	// create char dev
	if (alloc_chrdev_region(&devnum, 0, 1, "updev") < 0)
		return -1;
	if ((clazz = class_create("upclass")) == NULL)
		goto release_region;
	clazz->devnode = mazemod_devnode;
	if (device_create(clazz, NULL, devnum, NULL, "maze") == NULL)
		goto release_class;
	cdev_init(&c_dev, &mazemod_dev_fops);
	if (cdev_add(&c_dev, devnum, 1) == -1)
		goto release_device;

	// create proc
	proc_create("maze", 0, NULL, &mazemod_proc_fops);

	maze1 = kmalloc(1000, GFP_KERNEL);
	maze2 = kmalloc(1000, GFP_KERNEL);
	maze3 = kmalloc(1000, GFP_KERNEL);

	maze = kmalloc(1000, GFP_KERNEL);
	tmp = kmalloc(1000, GFP_KERNEL);
	buff = kmalloc(1000, GFP_KERNEL);
	label = kmalloc(30, GFP_KERNEL);
	memset(maze, 0, 1000);
	memset(tmp, '\0', 1000);

	// printk(KERN_INFO "maze: initialized.\n");
	return 0; // Non-zero return means that the module couldn't be loaded.

release_device:
	device_destroy(clazz, devnum);
release_class:
	class_destroy(clazz);
release_region:
	unregister_chrdev_region(devnum, 1);
	return -1;
}

static void __exit mazemod_cleanup(void)
{
	remove_proc_entry("maze", NULL);

	cdev_del(&c_dev);
	device_destroy(clazz, devnum);
	class_destroy(clazz);
	unregister_chrdev_region(devnum, 1);
	kfree(buff);
	kfree(maze);
	kfree(tmp);
	kfree(maze1);
	kfree(maze2);
	kfree(maze3);
	kfree(label);

	// printk(KERN_INFO "mazemod: cleaned up.\n");
}

module_init(mazemod_init);
module_exit(mazemod_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Chun-Ying Huang");
MODULE_DESCRIPTION("The unix programming course demo kernel module.");