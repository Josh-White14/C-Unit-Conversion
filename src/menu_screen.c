#include "menu_screen.h"

int length_conversion_menu(){

    
    bool is_len_menu_running = true; 
    while(is_len_menu_running){

        clear_buffer();
        clear_screen();
        puts("LENGTH CONVERSION MENU"
            "\n----------------------"
            "\n[1] Meters to Feet"
             "\n[2] Feet to Meters"
             "\n[3] Kilometers to Miles"
             "\n[4] Miles to Kilometers"
             "\n[5] Meters to Yards"
             "\n[6] Yards to Meters"
             "\n[7] Main Menu"

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
                conversion_function("Enter a value in Kilometers", "KILOMETERS TO MILES CONVERSION", "km", "miles", kilometers_to_miles);
                break;
            }

            case 4: {
                conversion_function("Enter a value in Miles","MILES TO KILOMETERS CONVERSION"," miles", "km", miles_to_kilometers);
                break;
            }

            case 5: {
                conversion_function("Enter a value in Meters","METERS TO YARDS CONVERSION", "m", "yds", meters_to_yards);
                break;
            }

            case 6: {
                conversion_function("Enter a value in Yards","YARDS TO METERS CONVERSION", "yds", "m", yards_to_meters);
                break;
            }

            case 7: {
                is_len_menu_running = false;
                break;
            }

            default : {
                conversion_screen_incorrect_menu_choice(choice);
                break;
            }

        }
    }
    clear_buffer();
    return 0;
}


int temperature_conversion_menu(){

    
    bool is_temp_menu_running = true; 
    while(is_temp_menu_running){

        clear_buffer();
        clear_screen();
        puts("TEMPERATURE CONVERSION MENU"
            "\n----------------------"
            "\n[1] Ceclius to Fahrenheit"
             "\n[2] Fahrenheit to Celcius"
             "\n[3] Ceclius to Kelvin"
             "\n[4] Kelvin to Celcius"
             "\n[5] Main Menu"
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
                is_temp_menu_running = false;
                break;
            }

            default : {
                conversion_screen_incorrect_menu_choice(choice);
                break;
            }

        }
    }
    clear_buffer();
    return 0;
}


int mass_conversion_menu(){

    
    bool is_mass_menu_running = true; 
    while(is_mass_menu_running){

        clear_buffer();
        clear_screen();
        puts("MASS CONVERSION MENU"
            "\n----------------------"
            "\n[1] Kilograms to Pounds"
             "\n[2] Pounds to Kilograms"
             "\n[3] Grams to Ounces"
             "\n[4] Ounces to Grams"
             "\n[5] Main Menu"
        );
 
        int choice = choice_input(); 

        switch(choice){
            
            case 1: {
                conversion_function("Enter a value in Kilograms", "KILOGRAMS TO POUNDS CONVERSION", "kg", "lbs", kilograms_to_pounds);
                break;

            }

            case 2: {

                conversion_function("Enter a value in Pounds","POUNDS TO KILOGRAMS CONVERSION", "lbs", "kg", pounds_to_kilograms);
                break;

            }


            case 3: {

                conversion_function("Enter a value in Grams","GRAMS TO OUNCES CONVERSION", "g", "oz", grams_to_ounces);
                break;

            }

            case 4: {

                conversion_function("Enter a value in Ounces","OUNCES TO GRAMS CONVERSION", "oz", "g", ounces_to_grams);
                break;

            }

            case 5: {
                is_mass_menu_running = false;
                break;
            }

            default : {
                conversion_screen_incorrect_menu_choice(choice);
                break;
            }

        }
    }
    clear_buffer();
    return 0;
}

int volume_conversion_menu(){
    
    
    bool is_vol_menu_running = true; 
    while(is_vol_menu_running){

        clear_buffer();
        clear_screen();
        puts("VOLUME CONVERSION MENU"
            "\n----------------------"
            "\n[1] Litres to Gallons"
             "\n[2] Gallons to Litres"
             "\n[3] Litres to Pints"
             "\n[4] Pints to Litres"
             "\n[5] Main Menu"
        );
 
        int choice = choice_input(); 

        switch(choice){
            
            case 1: {
                conversion_function("Enter a value in Litres", "LITRES TO GALLONS CONVERSION", "Litres", "Gallons", litres_to_gallons);
                break;

            }

            case 2: {

                conversion_function("Enter a value in Gallons","GALLONS TO LITRES CONVERSION", "Gallons", "Litres", gallons_to_litres);
                break;

            }

            case 3: {

                conversion_function("Enter a value in Litres","LITRES TO PINTS CONVERSION", "Litres", "Pints", litres_to_pints);
                break;

            }

            case 4: {

                conversion_function("Enter a value in Pints","PINTS TO LITRES CONVERSION", "Pints", "Litres", pints_to_litres);
                break;

            }

            case 5: {
                is_vol_menu_running = false;
                break;
            }
            
            default: {
                conversion_screen_incorrect_menu_choice(choice);
                break;
            }
            
        }
    }
    clear_buffer();
    return 0; 
}