# Makefile for building sdb
# Compiler
CC = gcc
# Executable name
TARGET = sdb
# Source files
SRC = sdb.c

# Libraries to link
LIBS = -lcapstone
# Build target
all: $(TARGET)
$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC) $(LIBS)

# Clean target to remove the built executable
clean:
	rm -f $(TARGET)
# Phony targets
.PHONY: all clean

