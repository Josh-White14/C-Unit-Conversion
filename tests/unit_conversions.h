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
static const double KILOMETERS_TO_MILES_CONVERSION_FACTOR = 0.621371;
static const double MILES_TO_KILOMETERS_CONVERSION_FACTOR = 1.60934;
static const double METRES_TO_YARDS_CONVERSION_FACTOR = 1.09361;
static const double YARDS_TO_METRES_CONVERSION_FACTOR = 0.9144;

static const double CELSIUS_TO_KELVIN_CONVERSION_FACTOR = 273.15;

static const double KILOGRAMS_TO_POUNDS_CONVERSION_FACTOR = 2.20462;
static const double POUNDS_TO_KILOGRAMS_CONVERSION_FACTOR = 0.453592;
static const double OUNCES_TO_GRAMS_CONVERSION_FACTOR = 28.3495;
static const double GRAMS_TO_OUNCES_CONVERSION_FACTOR = 0.035274;

static const double LITRES_TO_GALLONS_CONVERSION_FACTOR = 0.264172;
static const double GALLONS_TO_LITRES_CONVERSION_FACTOR = 3.78541;
static const double LITRES_TO_PINTS_CONVERSION_FACTOR = 2.11338;
static const double PINTS_TO_LITRES_CONVERSION_FACTOR = 0.473176;



double meters_to_feet(double meter_measurement);
double feet_to_meters(double feet_measurement);
double kilometers_to_miles(double kilometers);
double miles_to_kilometers(double miles);
double meters_to_yards(double metres);
double yards_to_meters(double yards);

double celsius_to_fahrenheit(double celsius_temperature);
double fahrenheit_to_celsius(double fahrenheit_temperature);
double celsius_to_kelvin(double ceclius_temperature);
double kelvin_to_celsius(double kelvin_temperature);

double kilograms_to_pounds(double kilograms);
double pounds_to_kilograms(double pounds);
double ounces_to_grams(double ounces);
double grams_to_ounces(double grams);


double litres_to_gallons(double litres);
double gallons_to_litres(double gallons);
double litres_to_pints(double litres);
double pints_to_litres(double pints);



#endif



