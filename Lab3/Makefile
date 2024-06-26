
all:
	gcc -c maze.c -Wall -g -D_GNU_SOURCE -fPIC -ldl
	gcc -c libmaze_dummy.c -Wall -g -D_GNU_SOURCE -fPIC -ldl
	gcc -o libmaze.so -shared libmaze_dummy.o
	gcc -o maze maze.o libmaze.so

	gcc -c libsolver.c -Wall -g -D_GNU_SOURCE -fPIC -ldl
	gcc -o libsolver.so -shared libsolver.o


clean:
	rm maze
	rm maze.o
	rm libmaze.so
	rm libmaze_dummy.o
	rm libsolver.so
	rm libsolver.o


# LD_LIBRARY_PATH=`pwd` LD_PRELOAD=./libsolver.so ./maze