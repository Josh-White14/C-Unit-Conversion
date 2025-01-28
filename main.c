#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "unit_conversions.h"



void clear(){
    while ( getchar() != '\n' );
}

int choice_input() {

    char num[2];
    if(fgets(num, sizeof(num), stdin) == NULL){
        return 0;
    }
    num[strcspn(num, "\n")] = 0;
    return atoi(num);

    
}


bool is_valid_input(char *s){
    if(s == NULL || s == '\0'){
        return false;
    }

    bool has_decimal = false;
    bool has_digit = false;

    int i = 0;
    
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

 


int main() {
   
   
    
    
    int choice;
    char* user_value_input = NULL;
    double double_input_value;


    bool isRunning = true; 
    while(isRunning == true){
        system("cls");
        puts("\n [1] Meters to Feet"
             "\n [2] Feet to Meters"
             "\n [3] Exit"
        );

        choice = choice_input(); 

        switch(choice){
            
            case 1: {

                system("cls");
                clear();
                puts("Enter a measurement in Meters");
                user_value_input = value_input();

                if(is_valid_input(user_value_input)){

                    double_input_value = atof(user_value_input);
                    printf("%g metres is %g feet \n", double_input_value, meters_to_feet(double_input_value));
                    free(user_value_input);

                }

                else{
                    printf("Invalid input \n");
                    free(user_value_input);
                }

                    
                
                
                printf("Press Enter to continue.... \n");
                getchar();
                break;

            }

            case 2: {

                system("cls");
                clear();
                puts("Enter a measurement in Feet");
                user_value_input = value_input();

                if(is_valid_input(user_value_input)){

                    double_input_value = atof(user_value_input);
                    printf("%lf feet is %lf meters\n", double_input_value, feet_to_meters(double_input_value));
                    free(user_value_input);

                }
                else{

                    printf("Invalid input \n");
                    free(user_value_input);
                }

                printf("Press Enter to continue...");
                getchar();
                break;

            }

            case 3: {
                isRunning = false;
                break;
            }

            default : {

                system("cls");
                clear();
                puts("Invalid choice, try again. \n");
                puts("Press Enter to return to menu...");
                getchar();
                break;
            }

        }
    }
    return 0;
}



