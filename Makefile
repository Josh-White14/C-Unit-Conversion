# Define the compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11 -MMD -MP

# Source files
SRC_DIR = src
TEST_DIR = tests
UNITY_DIR = Unity/src

SRCS = $(SRC_DIR)/unit_conversions.c $(SRC_DIR)/utils.c $(SRC_DIR)/main.c $(SRC_DIR)/menu_screen.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
TARGET = test_main

# Default target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 

# Compile source files to object files
%.o: %.c  
	$(CC) $(CFLAGS) -c $< -o $@  

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET) 

.PHONY: all clean