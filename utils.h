#ifndef UTILS_H
#define UTILS_H
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <math.h> 
#include <ctype.h> 



bool is_valid_input(char *s);
void clear_buffer();
int choice_input();
char* value_input();
void clear_screen();
void default_screen();
void conversion_function(const char *prompt, const char *title, const char *input_unit, const char *output_unit, double(*conversion_func)(double));

#endif 