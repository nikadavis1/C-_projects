#include "nld2896_Steering_wheel.h"

std::string Steering::get_color()
{
	return color;
}

std::string Steering::get_fabric()
{
	return fabric;
}

int Steering::get_diameter()
{
	return diameter;
}

void Steering::set_color(std::string co)
{
	color = co;
}


void Steering::set_fabric(std::string fb)
{
	fabric = fb;
}

void Steering::set_diameter(int dia)
{
	diameter = dia;
}

std::string Steering::to_string()
{
	return type + " " + name + " " + std::to_string(part_number) + " " + std::to_string(price) + " " + color + " " +  fabric + " " + std::to_string(diameter);
}

std::ostream& operator<<(std::ostream& ost, const Steering& part)
{
	ost << "Type: " << part.type << " Name: " << part.name << " Part Number: " << part.part_number << " Price: " << part.price << " Color: " << part.color << " Fabric: " << part.fabric << " Diameter: " << part.diameter;
	return ost;
}
