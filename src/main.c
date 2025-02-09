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
   
    bool is_running = true; 
    while(is_running == true){

        clear_screen();
        
        puts("CONVERSION COMMAND LINE TOOL"
            "\n---------------------------"
            "\n[1] Length Conversion Menu"
            "\n[2] Temperature Conversion Menu"
            "\n[3] Mass Conversion Menu"
            "\n[4] Volume Conversion Menu"
            "\n[5] Speed Conversion Menu"
            "\n[6] Unit Calculation Menu"
            "\n[7] Exit"
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

                mass_conversion_menu();
                break;

            }

            case 4: {

                volume_conversion_menu();
                break;

            }

            case 5: {

                speed_conversion_menu();
                break;

            }

            case 6: {

                unit_calculation_menu();
                break;

            }

            case 7: {
                is_running = false;
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



