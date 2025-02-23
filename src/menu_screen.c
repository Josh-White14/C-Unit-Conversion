#include "menu_screen.h"

// File to display the menu screens for the conversion tool.
int
length_conversion_menu ()
{


  bool is_len_menu_running = true;
  while (is_len_menu_running)
    {

      clear_buffer ();
      clear_screen ();
      puts ("LENGTH CONVERSION MENU"
	    "\n----------------------"
	    "\n[1] Meters to Feet"
	    "\n[2] Feet to Meters"
	    "\n[3] Kilometers to Miles"
	    "\n[4] Miles to Kilometers"
	    "\n[5] Meters to Yards"
	    "\n[6] Yards to Meters" "\n[7] Main Menu");

      int choice = choice_input ();

      switch (choice)
	{

	case 1:
	  {
	    conversion_function ("Enter a value in Meters",
				 "METERS TO FEET CONVERSION", "meters",
				 "feet", meters_to_feet, true);
	    break;

	  }

	case 2:
	  {

	    conversion_function ("Enter a value in Feet",
				 "FEET TO METERS CONVERSION", "feet",
				 "meters", feet_to_meters, true);
	    break;

	  }

	case 3:
	  {
	    conversion_function ("Enter a value in Kilometers",
				 "KILOMETERS TO MILES CONVERSION", "km",
				 "miles", kilometers_to_miles, true);
	    break;
	  }

	case 4:
	  {
	    conversion_function ("Enter a value in Miles",
				 "MILES TO KILOMETERS CONVERSION", " miles",
				 "km", miles_to_kilometers, true);
	    break;
	  }

	case 5:
	  {
	    conversion_function ("Enter a value in Meters",
				 "METERS TO YARDS CONVERSION", "m", "yds",
				 meters_to_yards, true);
	    break;
	  }

	case 6:
	  {
	    conversion_function ("Enter a value in Yards",
				 "YARDS TO METERS CONVERSION", "yds", "m",
				 yards_to_meters, true);
	    break;
	  }

	case 7:
	  {
	    is_len_menu_running = false;
	    break;
	  }

	default:
	  {
	    conversion_screen_incorrect_menu_choice (choice);
	    break;
	  }

	}
    }
  clear_buffer ();
  return 0;
}


int
temperature_conversion_menu ()
{


  bool is_temp_menu_running = true;
  while (is_temp_menu_running)
    {

      clear_buffer ();
      clear_screen ();
      puts ("TEMPERATURE CONVERSION MENU"
	    "\n----------------------"
	    "\n[1] Ceclius to Fahrenheit"
	    "\n[2] Fahrenheit to Celsius"
	    "\n[3] Ceclius to Kelvin"
	    "\n[4] Kelvin to Celsius" "\n[5] Main Menu");

      int choice = choice_input ();

      switch (choice)
	{

	case 1:
	  {
	    conversion_function ("Enter a value in Celsius",
				 "CELSIUS TO FAHRENHEIT CONVERSION", "C", "F",
				 celsius_to_fahrenheit, true);
	    break;

	  }

	case 2:
	  {

	    conversion_function ("Enter a value in Fahrenheit",
				 "FAHRENHEIT TO CELSIUS CONVERSION", "F", "C",
				 fahrenheit_to_celsius, true);
	    break;

	  }


	case 3:
	  {

	    conversion_function ("Enter a value in celsius",
				 "CELSIUS TO KELVIN CONVERSION", "C", "K",
				 celsius_to_kelvin, true);
	    break;

	  }

	case 4:
	  {

	    conversion_function ("Enter a value in Kelvin",
				 "KELVIN TO CELSIUS CONVERSION", "F", "C",
				 kelvin_to_celsius, true);
	    break;

	  }

	case 5:
	  {
	    is_temp_menu_running = false;
	    break;
	  }

	default:
	  {
	    conversion_screen_incorrect_menu_choice (choice);
	    break;
	  }

	}
    }
  clear_buffer ();
  return 0;
}


int
mass_conversion_menu ()
{


  bool is_mass_menu_running = true;
  while (is_mass_menu_running)
    {

      clear_buffer ();
      clear_screen ();
      puts ("MASS CONVERSION MENU"
	    "\n----------------------"
	    "\n[1] Kilograms to Pounds"
	    "\n[2] Pounds to Kilograms"
	    "\n[3] Grams to Ounces"
	    "\n[4] Ounces to Grams" "\n[5] Main Menu");

      int choice = choice_input ();

      switch (choice)
	{

	case 1:
	  {
	    conversion_function ("Enter a value in Kilograms",
				 "KILOGRAMS TO POUNDS CONVERSION", "kg",
				 "lbs", kilograms_to_pounds, false);
	    break;

	  }

	case 2:
	  {

	    conversion_function ("Enter a value in Pounds",
				 "POUNDS TO KILOGRAMS CONVERSION", "lbs",
				 "kg", pounds_to_kilograms, false);
	    break;

	  }


	case 3:
	  {

	    conversion_function ("Enter a value in Grams",
				 "GRAMS TO OUNCES CONVERSION", "g", "oz",
				 grams_to_ounces, false);
	    break;

	  }

	case 4:
	  {

	    conversion_function ("Enter a value in Ounces",
				 "OUNCES TO GRAMS CONVERSION", "oz", "g",
				 ounces_to_grams, false);
	    break;

	  }

	case 5:
	  {
	    is_mass_menu_running = false;
	    break;
	  }

	default:
	  {
	    conversion_screen_incorrect_menu_choice (choice);
	    break;
	  }

	}
    }
  clear_buffer ();
  return 0;
}

int
volume_conversion_menu ()
{


  bool is_vol_menu_running = true;
  while (is_vol_menu_running)
    {

      clear_buffer ();
      clear_screen ();
      puts ("VOLUME CONVERSION MENU"
	    "\n----------------------"
	    "\n[1] Litres to Gallons"
	    "\n[2] Gallons to Litres"
	    "\n[3] Litres to Pints"
	    "\n[4] Pints to Litres" "\n[5] Main Menu");

      int choice = choice_input ();

      switch (choice)
	{

	case 1:
	  {
	    conversion_function ("Enter a value in Litres",
				 "LITRES TO GALLONS CONVERSION", "Litres",
				 "Gallons", litres_to_gallons, false);
	    break;

	  }

	case 2:
	  {

	    conversion_function ("Enter a value in Gallons",
				 "GALLONS TO LITRES CONVERSION", "Gallons",
				 "Litres", gallons_to_litres, false);
	    break;

	  }

	case 3:
	  {

	    conversion_function ("Enter a value in Litres",
				 "LITRES TO PINTS CONVERSION", "Litres",
				 "Pints", litres_to_pints, false);
	    break;

	  }

	case 4:
	  {

	    conversion_function ("Enter a value in Pints",
				 "PINTS TO LITRES CONVERSION", "Pints",
				 "Litres", pints_to_litres, false);
	    break;

	  }

	case 5:
	  {
	    is_vol_menu_running = false;
	    break;
	  }

	default:
	  {
	    conversion_screen_incorrect_menu_choice (choice);
	    break;
	  }

	}
    }
  clear_buffer ();
  return 0;
}

int
speed_conversion_menu ()
{


  bool is_speed_menu_running = true;
  while (is_speed_menu_running)
    {

      clear_buffer ();
      clear_screen ();
      puts ("SPEED CONVERSION MENU"
	    "\n----------------------"
	    "\n[1] Kilometers per Hour to Miles per Hour"
	    "\n[2] Miles per Hour to Kilometers per Hour" 
		"\n[3] Miles per Hour to Meters per Second"
	    "\n[4] Meters per Second to Miles per Hour" "\n[5] Main Menu");

      int choice = choice_input ();

      switch (choice)
	{

	case 1:
	  {
	    conversion_function ("Enter a value in Kilometers per Hour",
				 "KPH TO MPH CONVERSION", "KPH", "MPH",
				 kph_to_mph, true);
	    break;

	  }

	case 2:
	  {

	    conversion_function ("Enter a value in Miles per Hour",
				 "MPH TO KPH CONVERSION", "MPH", "KPH",
				 mph_to_kph, true);
	    break;

	  }

	case 3:
	  {

	    conversion_function ("Enter a value in Miles per Hour",
				 "MPH TO MPS CONVERSION", "MPH", "MPS",
				 mph_to_mps, true);
	    break;

	  }

	case 4:
	  {

	    conversion_function ("Enter a value in Meters per Second",
				 "MPS TO MPH CONVERSION", "MPS", "MPH",
				 mps_to_mph, true);
	    break;

	  }

	case 5:
	  {
	    is_speed_menu_running = false;
	    break;
	  }

	default:
	  {
	    conversion_screen_incorrect_menu_choice (choice);
	    break;
	  }

	}
    }
  clear_buffer ();
  return 0;
}


int
unit_calculation_menu ()
{


  bool is_unit_calc_menu_running = true;
  while (is_unit_calc_menu_running)
    {

      clear_buffer ();
      clear_screen ();
      puts ("UNIT CALCULATION MENU"
	    "\n----------------------"
	    "\n[1] Speed Calculation"
	    "\n[2] Mass Calculation"
	    "\n[3] Acceleration Calculation" "\n[4] Main Menu");

      int choice = choice_input ();

      switch (choice)
	{

	case 1:
	  {
	    unit_calculation_function ("Enter a distance in KM",
				       "Enter a value in Hours",
				       "SPEED CALCULATION", "km", "hours",
				       "KPH", speed_calculation, true);
	    break;

	  }

	case 2:
	  {

	    unit_calculation_function ("Enter a mass in KG",
				       "Enter a value in M/S^2",
				       "MASS CALCULATION", "kg", "m/s^2", "N",
				       mass_calculation, true);
	  break;
	  }
	  
	case 3:
	  {

	    unit_calculation_function ("Enter a velocity in M/S",
				       "Enter a value in Seconds",
				       "ACCELERATION CALCULATION", "m/s", "s",
				       "m/s^2", acceleration_calculation,
				       true);
	    break;

	  }

	case 4:
	  {
	    is_unit_calc_menu_running = false;
	    break;
	  }

	default:
	  {
	    conversion_screen_incorrect_menu_choice (choice);
	    break;
	  }

	}
    }
  clear_buffer ();
  return 0;
}


int
data_conversion_menu ()
{
	bool is_data_menu_running = true;
	while (is_data_menu_running)
		{
			clear_buffer ();
			clear_screen ();
			puts ("DATA CONVERSION MENU"
			"\n----------------------"
			"\n[1] Megabytes to Gigabytes"
			"\n[2] Gigabytes to Megabytes"
			"\n[3] Gigabytes to Kilobytes"
			"\n[4] Kilobytes to Gigabytes"
			"\n[5] Main Menu");

			int choice = choice_input ();

			switch (choice)
	{
	case 1:
		{
			conversion_function ("Enter a value in Megabytes",
				 "MEGABYTES TO GIGABYTES CONVERSION", "MB",
				 "GB", MB_to_GB, false);
			break;
		}

	case 2:
		{
			conversion_function ("Enter a value in Gigabytes",
				 "GIGABYTES TO MEGABYTES CONVERSION", "GB",
				 "MB", GB_to_MB, false);
			break;
		}

	case 3:
		{
			conversion_function ("Enter a value in Gigabytes",
				 "GIGABYTES TO KILOBYTES CONVERSION", "GB",
				 "KB", GB_to_KB, false);
			break;
		}

	case 4:
		{
			conversion_function ("Enter a value in Kilobytes",
				 "KILOYTES TO GIGABYTES CONVERSION", "KB",
				 "GB", KB_to_GB, false);
			break;
		}

	case 5:
		{
			is_data_menu_running = false;
			break;
		}

	default:
		{
			conversion_screen_incorrect_menu_choice (choice);
			break;
		}
	}
		}
	clear_buffer ();
	return 0;
}