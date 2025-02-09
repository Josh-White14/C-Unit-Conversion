#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


bool is_valid_input(char *s, bool negative_allowed){

    if(s == NULL || *s == '\0'){
        return false;
    }

    bool has_decimal = false;
    bool has_digit = false;

    int i = 0;
    
    if(s[0] == '-' && negative_allowed){
        i++;
    }

    else if (s[0] == '-' && !negative_allowed){
        return false; 
    }

    while(s[i] != '\0'){


        if(isdigit(s[i])){
            has_digit = true;
        }

        else if(s[i] == '.'){

            if(has_decimal){
                return false; 
            
            }

            has_decimal = true;
        }

        else{

            return false;
        }

        i++;
    }
    return has_digit;
}

int choice_input() {

    char choice_selection[2];
    if(fgets(choice_selection, sizeof(choice_selection), stdin) == NULL){
        return 0;
    }
    choice_selection[strcspn(choice_selection, "\n")] = 0;
    int choice_selection_integer = (int)strtod(choice_selection, NULL);    
    return choice_selection_integer;
}

char* value_input(){

    char string_input[100];

    if(fgets(string_input, sizeof(string_input), stdin) == NULL){
        return NULL;
    }

    string_input[strcspn(string_input, "\n")] = 0; 
    char* string_return = (char*)malloc(strlen(string_input) + 1);

    if(string_return == NULL){

        fprintf(stderr, "Memory Allocation Failed");
        return NULL;
    }

    strcpy(string_return, string_input);
    return string_return;
 }

 void clear_buffer(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
}

void clear_screen(){
    
    system("cls");
    
}

void conversion_screen_incorrect_menu_choice(int choice){

    clear_screen();
    clear_buffer();
    puts("Invalid choice.\n");
    printf("%d is not a valid menu selection.\n", choice);
    puts("\nPress Enter to return to menu...");
}

void home_screen_incorrect_menu_choice(int choice){

    clear_screen();
    clear_buffer();
    puts("Invalid choice.\n");
    printf("%d is not a valid menu selection.\n", choice);
    puts("\nPress Enter to return to menu...");
    clear_buffer();
}

void conversion_function(const char *prompt, const char *title, const char *input_unit
    , const char *output_unit, double(*conversion_func)(double), bool negative_allowed){

    double double_input_value;
    char* user_input_value = NULL;
    
   clear_buffer();    

   while(1){

        clear_screen();
        puts(title);
        puts("-------------------------");
        puts(prompt);
        user_input_value = value_input();
        
        
        if(is_valid_input(user_input_value, negative_allowed)){

            double_input_value = strtod(user_input_value, NULL);
            printf("\n%.2lf %s is equivalent to %.2lf %s \r\n", double_input_value, input_unit, conversion_func(double_input_value), output_unit);
            free(user_input_value);
            puts("\nPress Enter to return to Menu");
            break;
            

        }

        else{
            printf("Invalid input: '%s", user_input_value);
            puts("\n\nIputs must be integer or float values.\nPress Enter to try again");
            free(user_input_value);
            clear_buffer();
        }
   }

}


