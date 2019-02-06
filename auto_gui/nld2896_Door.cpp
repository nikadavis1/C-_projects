#include "nld2896_Door.h"

std::string Door::get_color()
{
	return color;
}

std::string Door::get_metal()
{
	return metal;
}


void Door::set_color(std::string co)
{
	color = co;
}


void Door::set_metal(std::string me)
{
	metal = me;
}


std::string Door::to_string()
{
	return type + " " + name + " " + std::to_string(part_number) + " " + std::to_string(price) + " " + color + " " +  metal;
}

std::ostream& operator<<(std::ostream& ost, const Door& part)
{
	ost << "Type: " << part.type << " Name: " << part.name << " Part Number: " << part.part_number << " Price: " << part.price << " Color: " << part.color << " Metal: " << part.metal;
	return ost;
}
