#include "Unity/src/unity.h"
#include "../src/utils.h" 
#include "../src/unit_conversions.h"



void setUp(void) {
    // Redundant for tests.
}

void tearDown(void) {
   // Redundant for tests.
}

void test_is_valid_input(void) {
    TEST_ASSERT_TRUE(is_valid_input("123", true));
    TEST_ASSERT_TRUE(is_valid_input("12.3", true));
    TEST_ASSERT_TRUE(is_valid_input("-12.3", true));
    TEST_ASSERT_FALSE(is_valid_input("-12.3", false));
    TEST_ASSERT_FALSE(is_valid_input("abc", true));
    TEST_ASSERT_FALSE(is_valid_input("12.3.4", true));
    TEST_ASSERT_FALSE(is_valid_input(NULL, true));
    TEST_ASSERT_FALSE(is_valid_input("", true));
}

void test_length_conversion(void) {
    TEST_ASSERT_EQUAL_FLOAT(3.28084, meters_to_feet(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.3048, feet_to_meters(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.621371, kilometers_to_miles(1.0));
    TEST_ASSERT_EQUAL_FLOAT(1.60934, miles_to_kilometers(1.0));
    TEST_ASSERT_EQUAL_FLOAT(1.09361, meters_to_yards(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.9144, yards_to_meters(1.0));
}

void test_temperature_conversion(void) {
    TEST_ASSERT_EQUAL_FLOAT(32.0, celsius_to_fahrenheit(0.0));
    TEST_ASSERT_EQUAL_FLOAT(0.0, fahrenheit_to_celsius(32.0));
    TEST_ASSERT_EQUAL_FLOAT(273.15, celsius_to_kelvin(0.0));
    TEST_ASSERT_EQUAL_FLOAT(0.0, kelvin_to_celsius(273.15));
}

void test_mass_conversion(void) {
    TEST_ASSERT_EQUAL_FLOAT(2.20462, kilograms_to_pounds(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.453592, pounds_to_kilograms(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.035274, grams_to_ounces(1.0));
    TEST_ASSERT_EQUAL_FLOAT(28.3495, ounces_to_grams(1.0));
}

void test_volume_conversion(void) {
    TEST_ASSERT_EQUAL_FLOAT(0.264172, litres_to_gallons(1.0));
    TEST_ASSERT_EQUAL_FLOAT(3.78541, gallons_to_litres(1.0));
    TEST_ASSERT_EQUAL_FLOAT(2.11338, litres_to_pints(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.473176, pints_to_litres(1.0));
}

void test_speed_conversion(void) {
    TEST_ASSERT_EQUAL_FLOAT(0.621371, kph_to_mph(1.0));
    TEST_ASSERT_EQUAL_FLOAT(1.60934, mph_to_kph(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.44704, mph_to_mps(1.0));
    TEST_ASSERT_EQUAL_FLOAT(2.23694, mps_to_mph(1.0));
}

void test_data_conversion(void) {
    TEST_ASSERT_EQUAL_FLOAT(1024, GB_to_MB(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.000976563, MB_to_GB(1.0));
    TEST_ASSERT_EQUAL_FLOAT(1048576, GB_to_KB(1.0));
    TEST_ASSERT_EQUAL_FLOAT(0.000000953674, KB_to_GB(1.0));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_is_valid_input);
    RUN_TEST(test_length_conversion);
    RUN_TEST(test_temperature_conversion);
    RUN_TEST(test_mass_conversion);
    RUN_TEST(test_volume_conversion);
    RUN_TEST(test_speed_conversion);
    RUN_TEST(test_data_conversion);
    return UNITY_END();
}
