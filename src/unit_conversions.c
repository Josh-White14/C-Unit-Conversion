#include "unit_conversions.h"

// File for all unit conversion functions.
double
meters_to_feet (double meters)
{
  return meters * METERS_TO_FEET_CONVERSION_FACTOR;
}

double
feet_to_meters (double feet)
{
  return feet * FEET_TO_METERS_CONVERSION_FACTOR;
}

double
kilometers_to_miles (double kilometers)
{
  return (kilometers * KILOMETERS_TO_MILES_CONVERSION_FACTOR);
}

double
miles_to_kilometers (double miles)
{
  return (miles * MILES_TO_KILOMETERS_CONVERSION_FACTOR);
}

double
meters_to_yards (double meters)
{
  return (meters * METRES_TO_YARDS_CONVERSION_FACTOR);
}

double
yards_to_meters (double yards)
{

  return (yards * YARDS_TO_METRES_CONVERSION_FACTOR);
}

double
celsius_to_fahrenheit (double celsius)
{
  return ((celsius * 1.8) + 32);
}

double
fahrenheit_to_celsius (double fahrenheit)
{
  return ((fahrenheit - 32) / 1.8);
}

double
celsius_to_kelvin (double celsius)
{
  return (celsius + CELSIUS_TO_KELVIN_CONVERSION_FACTOR);
}

double
kelvin_to_celsius (double kelvin)
{
  return (kelvin - CELSIUS_TO_KELVIN_CONVERSION_FACTOR);
}

double
kilograms_to_pounds (double kilograms)
{
  return kilograms * KILOGRAMS_TO_POUNDS_CONVERSION_FACTOR;
}

double
pounds_to_kilograms (double pounds)
{
  return pounds * POUNDS_TO_KILOGRAMS_CONVERSION_FACTOR;
}

double
ounces_to_grams (double ounces)
{
  return ounces * OUNCES_TO_GRAMS_CONVERSION_FACTOR;
}

double
grams_to_ounces (double grams)
{
  return grams * GRAMS_TO_OUNCES_CONVERSION_FACTOR;
}

double
litres_to_gallons (double litres)
{
  return litres * LITRES_TO_GALLONS_CONVERSION_FACTOR;
}

double
gallons_to_litres (double gallons)
{
  return gallons * GALLONS_TO_LITRES_CONVERSION_FACTOR;
}

double
litres_to_pints (double litres)
{
  return litres * LITRES_TO_PINTS_CONVERSION_FACTOR;
}

double
pints_to_litres (double pints)
{
  return pints * PINTS_TO_LITRES_CONVERSION_FACTOR;
}

double
kph_to_mph (double kph)
{
  return kph * KPH_TO_MPH_CONVERSION_FACTOR;
}

double
mph_to_kph (double mph)
{
  return mph * MPH_TO_KPH_CONVERSION_FACTOR;
}

double
mph_to_mps (double mph)
{
  return mph * MPH_TO_MPS_CONVERSION_FACTOR;
}

double
mps_to_mph (double mps)
{
  return mps * MPS_TO_MPH_CONVERSION_FACTOR;
}

double
GB_to_MB (double GB)
{
  return GB * GB_TO_MB_CONVERSION_FACTOR;
}

double
MB_to_GB (double MB)
{
  return MB * MB_TO_GB_CONVERSION_FACTOR;
}

double
GB_to_KB (double GB)
{
  return GB * GB_TO_KB_CONVERSION_FACTOR;
}

double
KB_to_GB (double KB)
{
  return KB * KB_TO_GB_CONVERSION_FACTOR;
}

double
speed_calculation (double distance, double time)
{
  return distance / time;
}

double
mass_calculation (double force, double acceleration)
{
  return force / acceleration;
}

double
acceleration_calculation (double velocity, double time)
{
  return velocity / time;
}
