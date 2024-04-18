
obj-m     += mazemod.o
ccflags-y += -DEXPORT_SYMTAB

all:
	make -C ../../modulebuild M=$(PWD) modules

clean:
	make -C ../../modulebuild M=$(PWD) clean

