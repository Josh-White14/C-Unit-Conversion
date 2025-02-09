#include "unit_conversions.h"

double meters_to_feet(double meters){
    return meters * METERS_TO_FEET_CONVERSION_FACTOR;
}

double feet_to_meters(double feet){
    return feet * FEET_TO_METERS_CONVERSION_FACTOR;
}

double kilometers_to_miles(double kilometers){
    return (kilometers * KILOMETERS_TO_MILES_CONVERSION_FACTOR);
}

double miles_to_kilometers(double miles){
    return (miles * MILES_TO_KILOMETERS_CONVERSION_FACTOR);
}

double meters_to_yards(double meters){
    return (meters * METRES_TO_YARDS_CONVERSION_FACTOR);
}

double yards_to_meters(double yards){
    
    return (yards * YARDS_TO_METRES_CONVERSION_FACTOR);
}

double celsius_to_fahrenheit(double celsius){
    return ((celsius * 1.8) + 32);
}

double fahrenheit_to_celsius(double fahrenheit){
    return ((fahrenheit - 32) / 1.8);
}

double celsius_to_kelvin(double celsius){
    return (celsius + CELSIUS_TO_KELVIN_CONVERSION_FACTOR);
}

double kelvin_to_celsius(double kelvin){
    return (kelvin - CELSIUS_TO_KELVIN_CONVERSION_FACTOR);
}

double kilograms_to_pounds(double kilograms){
    return kilograms * KILOGRAMS_TO_POUNDS_CONVERSION_FACTOR;
}

double pounds_to_kilograms(double pounds){
    return pounds * POUNDS_TO_KILOGRAMS_CONVERSION_FACTOR;
}

double ounces_to_grams(double ounces){
    return ounces * OUNCES_TO_GRAMS_CONVERSION_FACTOR;
}

double grams_to_ounces(double grams){
    return grams * GRAMS_TO_OUNCES_CONVERSION_FACTOR;
}

double litres_to_gallons(double litres){
    return litres * LITRES_TO_GALLONS_CONVERSION_FACTOR;
}

double gallons_to_litres(double gallons){
    return gallons * GALLONS_TO_LITRES_CONVERSION_FACTOR;
}

double litres_to_pints(double litres){
    return litres * LITRES_TO_PINTS_CONVERSION_FACTOR;
}

double pints_to_litres(double pints){
    return pints * PINTS_TO_LITRES_CONVERSION_FACTOR;
}



