#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include "unit_conversions.h"
#include "utils.h"
#include "menu_screen.h"

int main() {
   
    bool isRunning = true; 
    while(isRunning == true){

        clear_screen();
        
        puts("CONVERSION COMMAND LINE TOOL"
            "\n---------------------------"
            "\n[1] Length Conversion Menu"
            "\n[2] Temperature Conversion Menu"
             "\n[3] Quit"
        );

        int choice = choice_input(); 

        switch(choice){
            
            case 1: {

                length_conversion_menu();
                break;

            }

            case 2: {

                temperature_conversion_menu();
                break;

            }

            case 3: {

                isRunning = false;
                break;

            }

            default : {
                home_screen_incorrect_menu_choice(choice);
                break;
            }

        }
    }
    return 0;
}



