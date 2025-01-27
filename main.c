#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "unit_conversions.h"
#include "unit_conversions.c"


int main() {
    int choice_input();
    double value_input();
    
    int choice;
    double user_value_input;
    float result;


    bool isRunning = true; 
    while(isRunning == true){
        system("cls");
        puts("\n [1] Meters to Feet"
             "\n [2] Exit"
        );

        choice = choice_input(); 

        switch(choice){

            case 1: {
                system("cls");
                puts("Enter Measurement in Meters \n");
                user_value_input = value_input();
                printf("%f metres is %f feet \n", user_value_input, user_value_input * METERS_TO_FEET_CONVERSION_FACTOR);
                printf("Press Enter to continue.... \n");
                getchar();
                getchar();
                break;
            }

            case 2: {
                isRunning = false;
                break;
            }

            default : {
                system("cls");
                puts("Invalid choice, try again. \n");
                puts("Press Enter to continue...");
                getchar();
                getchar();
                break;
            }

        }
    }
    return 0;
}

int choice_input() {

    int number;
    scanf("%d", &number);
    return number;
}

double value_input(){

    double number;
    scanf("%lf", &number);
    return number;

}

