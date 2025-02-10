# Define the compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11 -MMD -MP -I $(TEST_DIR)/$(UNITY_DIR)/

# Source files
SRC_DIR = src
TEST_DIR = tests
UNITY_DIR = Unity/src

SRCS = $(SRC_DIR)/unit_conversions.c $(SRC_DIR)/utils.c $(SRC_DIR)/main.c $(SRC_DIR)/menu_screen.c
TEST_SRCS = $(TEST_DIR)/test_main.c $(SRC_DIR)/unit_conversions.c $(SRC_DIR)/utils.c $(TEST_DIR)/$(UNITY_DIR)/unity.c

# Object files
OBJS = $(SRCS:.c=.o)	
TEST_OBJS = $(TEST_SRCS:.c=.o)	

# Executable name
TARGET = unit_conversion
TEST_TARGET = test_main

# Default target
all: $(TARGET)	$(TEST_TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 		

$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $@ $^	

# Compile source files to object files
%.o: %.c  
	$(CC) $(CFLAGS) -c $< -o $@  	

# Clean up build files
clean:
	del /Q $(subst /,\,$(OBJS)) $(subst /,\,$(SRCS:.c=.d)) $(subst /,\,$(TEST_OBJS)) $(subst /,\,$(TEST_SRCS:.c=.d)) $(TARGET).exe $(TEST_TARGET).exe

.PHONY: all clean