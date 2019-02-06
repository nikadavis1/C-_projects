#include "nld2896_Dashboard.h"

std::string Dashboard::get_light_color()
{
	return light_color;
}

std::string Dashboard::get_fuel_gauge()
{
	return fuel_gauge;
}

std::string Dashboard::get_temperature_gauge()
{
	return temperature_gauge;
}

std::string Dashboard::get_voltmeter()
{
	return voltmeter;
}

void Dashboard::set_light_color(std::string cl)
{
	light_color = cl;
}


void Dashboard::set_fuel_gauge(std::string fg)
{
	fuel_gauge = fg;
}

void Dashboard::set_temperature_gauge(std::string tg)
{
	temperature_gauge = tg;
}

void Dashboard::set_voltmeter(std::string vm)
{
	voltmeter = vm;
}


std::string Dashboard::to_string()
{
	return type + " " + name + " " + std::to_string(part_number) + " " + std::to_string(price) + " " + light_color + " " +  fuel_gauge + " " + temperature_gauge+ " " + voltmeter;
}

std::ostream& operator<<(std::ostream& ost, const Dashboard& part)
{
	ost << "Type: " << part.type << " Name: " << part.name << " Part Number: " << part.part_number << " Price: " << part.price << " Light Color: " << part.light_color << " Fuel Gauge: " << part.fuel_gauge << " temperature_gauge: " << part.temperature_gauge<< "Voltmeter: "<< part.voltmeter;
	return ost;
}
