#include "unit_conversions.h"

double meters_to_feet(double meters){
    return meters * METERS_TO_FEET_CONVERSION_FACTOR;
}

double feet_to_meters(double feet){
    return feet * FEET_TO_METERS_CONVERSION_FACTOR;
}