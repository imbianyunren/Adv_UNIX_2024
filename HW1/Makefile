all:
	gcc -c logger.c -Wall -g -D_GNU_SOURCE -fPIC -ldl
	gcc -c shared_lib.c -Wall -g -D_GNU_SOURCE -fPIC -ldl
	gcc -o logger.so -shared shared_lib.o
	gcc -o logger logger.o 
	gcc -o tester tester.c

clean:
	rm logger.so
	rm shared_lib.o
	rm logger.o
	rm logger
	rm tester

# LD_LIBRARY_PATH=`pwd` LD_PRELOAD=./logger.so ./ex1-1

# ./logger config.txt ./ex1-1
# ./logger config.txt ./ex1-2
# ./logger config.txt ./ex2
# ./logger config.txt ./ex3-1
# ./logger config.txt ./ex3-2
# ./logger config.txt ./ex4 www.cs.nycu.edu.tw
# ./logger config.txt ./ex4 www.google.com
# ./logger config.txt ./ex5 172.217.160.100
# ./logger config.txt ./ex5 20.27.177.113
# ./logger config.txt ./ex6
