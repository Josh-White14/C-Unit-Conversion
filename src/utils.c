#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/* 
This function returns 'true' or 'false' in order to validate user input.
Note the function takes a string and bool as arguments - this was implmeneted
as the double input from the user cannot be evaluated using other methods that
return a double value, and the conversion from STDIN to a double must happen after
validation as any invalid double input would return 0 (a valid input for unit
conversion).
*/

bool
is_valid_input (char *s, bool negative_allowed)
{

  if (s == NULL || *s == '\0')
    {
      return false;
    }

  // Flags to check if the input has a decimal or digit
  bool has_decimal = false;
  bool has_digit = false;

  int i = 0;

  // Check bool parameter to determine if negative values are allowed.
  if (s[0] == '-' && negative_allowed)
    {
      i++;
    }

  else if (s[0] == '-' && !negative_allowed)
    {
      return false;
    }

  while (s[i] != '\0')
    {


      if (isdigit (s[i]))
	    {
	      has_digit = true;
	    }

      else if (s[i] == '.')
	    {

	      if (has_decimal)
	      {
	        return false;

	      }

	    has_decimal = true;
	    }

      else
	    {

	      return false;
	  }

      i++;
    }

  // valid inputs must contain at least one digit. 
  return has_digit;
}

int
choice_input ()
{

  char choice_selection[2];
  if (fgets (choice_selection, sizeof (choice_selection), stdin) == NULL)
    {
      return 0;
    }
  choice_selection[strcspn (choice_selection, "\n")] = 0;
  int choice_selection_integer = (int) strtod (choice_selection, NULL);
  return choice_selection_integer;
}

char *
value_input ()
{

  // read input into buffer to prevent excess input from being read.
  char string_input[100];

  if (fgets (string_input, sizeof (string_input), stdin) == NULL)
    {
      return NULL;
    }

  string_input[strcspn (string_input, "\n")] = 0;
  char *string_return = (char *) malloc (strlen (string_input) + 1);

  if (string_return == NULL)
    {

      fprintf (stderr, "Memory Allocation Failed");
      return NULL;
    }

  strcpy (string_return, string_input);
  return string_return;
}

void
clear_buffer ()
{
  int c;
  while ((c = getchar ()) != '\n' && c != EOF);

}

void
clear_screen ()
{

  system ("cls");

}

void
conversion_screen_incorrect_menu_choice (int choice)
{

  clear_screen ();
  clear_buffer ();


  if (choice == 0)
    {
      puts ("Invalid input. Please enter a valid number.");
    }

  else
    {
      printf ("%d is not a valid menu selection.\n", choice);


      puts ("\nPress Enter to return to menu...");
    }
}

void
home_screen_incorrect_menu_choice (int choice)
{

  clear_screen ();
  clear_buffer ();
  if (choice == 0)
    {
      puts ("Invalid input. Please enter a valid number.");
    }

  else
    {
      printf ("%d is not a valid menu selection.\n", choice);


      puts ("\nPress Enter to return to menu...");
    }

  clear_buffer ();
}


/* 
The following functions handle unit conversion and calculation. They take a 
range of parameters which maintains modularity and reusability of code, as 
each new conversion can pass in a unique set of paramters.
*/
void
conversion_function (const char *prompt, const char *title,
		     const char *input_unit, const char *output_unit,
		     double (*conversion_func) (double),
		     const bool negative_allowed)
{

  double double_input_value;
  char *user_input_value = NULL;

  clear_buffer ();

  while (1)
    {

      clear_screen ();
      puts (title);
      puts ("-------------------------");
      puts (prompt);
      user_input_value = value_input ();


      if (is_valid_input (user_input_value, negative_allowed))
	{

	  double_input_value = strtod (user_input_value, NULL);
	  printf ("\n%.3lf %s is equivalent to %.3lf %s \n",
		  double_input_value, input_unit,
		  conversion_func (double_input_value), output_unit);
	  puts ("\nPress Enter to return to Menu");
	  break;


	}

      else
	{
	  fprintf (stderr, "Invalid input: %s", user_input_value);
	  puts ("\n\nInputs must be integer or float values."
		"\nNOTE: Some unit conversions do not handle negative values."
		"\n\nPress Enter to try again");
	  clear_buffer ();
	}
    }
  free (user_input_value);
  user_input_value = NULL;

}

void
unit_calculation_function (const char *prompt_one, const char *prompt_two,
			   const char *title, const char *unit_one,
			   const char *unit_two, const char *output_unit,
			   double (*unit_calculation_func) (double, double),
			   const bool negative_allowed)
{

  char *first_input = NULL;
  char *second_input = NULL;

  clear_buffer ();

  while (1)
    {
      clear_screen ();
      puts (title);
      puts ("-------------------------");
      puts (prompt_one);
      first_input = value_input();

      puts (prompt_two);
      second_input = value_input();

    if (is_valid_input (first_input, negative_allowed)
	  && is_valid_input (second_input, negative_allowed))
	  {

	  double double_first_input = strtod (first_input, NULL);
	  double double_second_input = strtod (second_input, NULL);

	  printf ("\nInputs: %.3lf %s , %.3lf %s Result: %.3lf %s \r\n",
		  double_first_input, unit_one, double_second_input, unit_two,
		  unit_calculation_func (double_first_input, double_second_input),
		  output_unit);
	  puts ("\nPress Enter to return to Menu");
	  break;
	  }

    else
    {
      fprintf (stderr, "Invalid input(s): %s %s", first_input, second_input);
      puts ("\n\nInputs must be integer or float values."
      "\nNOTE: Some unit conversions do not handle negative values"
      "\nPress Enter to try again");
      clear_buffer ();
    }
  }
  free (first_input);
  free (second_input);
  first_input = NULL;
  second_input = NULL;

}
