#ifndef UNIT_CONVERSIONS_H
#define UNIT_CONVERSIONS_H
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h> 
#include <string.h>
#include <math.h> 
#include <ctype.h> 
#include "utils.h"



static const double METERS_TO_FEET_CONVERSION_FACTOR =  3.28084;
static const double FEET_TO_METERS_CONVERSION_FACTOR = 0.3048;
static const double CELCIUS_TO_KELVIN_CONVERSION_FACTOR = 273.15;

double meters_to_feet(double meter_measurement);
double feet_to_meters(double feet_measurement);
double celcius_to_fahrenheit(double celcius_temperature);
double fahrenheit_to_celcius(double fahrenheit_temperature);
double celcius_to_kelvin(double ceclius_temperature);
double kelvin_to_celcius(double kelvin_temperature);

#endif



