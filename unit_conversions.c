#include "unit_conversions.h"

double meters_to_feet(double meters){
    return meters * METERS_TO_FEET_CONVERSION_FACTOR;
}

double feet_to_meters(double feet){
    return feet * FEET_TO_METERS_CONVERSION_FACTOR;
}

double celcius_to_fahrenheit(double celcius){
    return ((celcius * 1.8) + 32);
}

double fahrenheit_to_celcius(double fahrenheit){
    return ((fahrenheit - 32) / 1.8);
}

double celcius_to_kelvin(double celcius){
    return (celcius + CELCIUS_TO_KELVIN_CONVERSION_FACTOR);
}

double kelvin_to_celcius(double kelvin){
    return (kelvin - CELCIUS_TO_KELVIN_CONVERSION_FACTOR);
}

