#include "menu_screen.h"

int length_conversion_menu(){

    
    bool isLengthConversionRunning = true; 
    while(isLengthConversionRunning == true){

        clear_buffer();
        clear_screen();
        puts("LENGTH CONVERSION MENU"
            "\n----------------------"
            "\n[1] Meters to Feet"
             "\n[2] Feet to Meters"
             "\n[3] Exit"
        );
 
        int choice = choice_input(); 

        switch(choice){
            
            case 1: {
                conversion_function("Enter a value in Meters", "METERS TO FEET CONVERSION", "meters", "feet", meters_to_feet);
                break;

            }

            case 2: {

                conversion_function("Enter a value in Feet","FEET TO METERS CONVERSION", "feet", "meters", feet_to_meters);
                break;

            }

            case 3: {
                isLengthConversionRunning = false;
                break;
            }

            default : {
                default_screen();
                break;
            }

        }
    }
    clear_buffer();
    return 0;
}


int temperature_conversion_menu(){

    
    bool isTemperatureRunning = true; 
    while(isTemperatureRunning == true){

        clear_buffer();
        clear_screen();
        puts("LENGTH CONVERSION MENU"
            "\n----------------------"
            "\n[1] Ceclius to Fahrenheit"
             "\n[2] Fahrenheit to Celcius"
             "\n[3] Ceclius to Kelvin"
             "\n[4] Kelvin to Celcius"
             "\n[5] Exit"
        );
 
        int choice = choice_input(); 

        switch(choice){
            
            case 1: {
                conversion_function("Enter a value in Celcius", "CELCIUS TO FAHRENHEIT CONVERSION", "C", "F", celcius_to_fahrenheit);
                break;

            }

            case 2: {

                conversion_function("Enter a value in Fahrenheit","FAHRENHEIT TO CELCIUS CONVERSION", "F", "C", fahrenheit_to_celcius);
                break;

            }


            case 3: {

                conversion_function("Enter a value in Celcius","CELCIUS TO KELVIN CONVERSION", "C", "K", celcius_to_kelvin);
                break;

            }

            case 4: {

                conversion_function("Enter a value in Kelvin","KELVIN TO CELCIUS CONVERSION", "F", "C", kelvin_to_celcius);
                break;

            }

            case 5: {
                isTemperatureRunning = false;
                break;
            }

            default : {
                default_screen();
                break;
            }

        }
    }
    clear_buffer();
    return 0;
}