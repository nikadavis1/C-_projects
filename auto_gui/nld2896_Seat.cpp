#include "nld2896_Seat.h"

std::string Seat::get_design()
{
	return design;
}

std::string Seat::get_color()
{
	return color;
}

std::string Seat::get_fabric()
{
	return fabric;
}

void Seat::set_design(std::string de)
{
	design = de;
}


void Seat::set_color(std::string co)
{
	color = co;
}

void Seat::set_fabric(std::string fab)
{
	fabric = fab;
}

std::string Seat::to_string()
{
	return type + " " + name + " " + std::to_string(part_number) + " " + std::to_string(price) + " " + design + " " +  color + " " + fabric;
}

std::ostream& operator<<(std::ostream& ost, const Seat& part)
{
	ost << "Type: " << part.type << " Name: " << part.name << " Part Number: " << part.part_number << " Price: " << part.price << " Design: " << part.design << " DColor: " << part.color << " Fabric: " << part.fabric;
	return ost;
}
