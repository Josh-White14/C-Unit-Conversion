#ifndef UTILS_H
#define UTILS_H
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>



bool is_valid_input (char *s, bool negative_allowed);
void clear_buffer ();
int choice_input ();
char *value_input ();
void clear_screen ();
void home_screen_incorrect_menu_choice (int choice);
void conversion_screen_incorrect_menu_choice (int choice);
void conversion_function (const char *prompt, const char *title,
			  const char *input_unit, const char *output_unit,
			  double (*conversion_func) (double),
			 const bool negative_allowed);

void unit_calculation_function (const char *prompt_one,
				const char *prompt_two, const char *title,
				const char *unit_one, const char *unit_two,
				const char *output_unit,
				double (*unit_calculation_func) (double,
								 double),
				const bool negative_allowed);

#endif
