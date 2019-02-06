#include "Wheel.h"

Wheel::Wheel()
{
	Auto_Part();
	category="null";
	color="null";
	w_diameter=0;
	w_width=0;
	bolt_pattern="null";
}

void Wheel::set_category(string cat)
{
	cat=category;
}

void Wheel::set_color(string c)
{
	
	color=c;
}

void Wheel::set_diameter(int dia)
{
	
	w_diameter=dia;
}

void Wheel::set_width(int w)
{
	
	w_width=w;
}

void Wheel::set_bolt_pattern(string b)
{
	
	bolt_pattern=b;
}

string Wheel::get_category()
{
	return category;
}

string Wheel::get_color()
{
	return color;
}

int Wheel::get_diameter()
{
	return w_diameter;
}

int Wheel::get_width()
{
	return w_width;
}

string Wheel::get_bolt_pattern()
{
	return bolt_pattern;
}

std::ostream& operator<<(std::ostream& ost, const Wheel& wheel)
{
	ost << "Category: " << wheel.category << ", Color: " << wheel.color << ", diameter: " << 
	wheel.w_diameter<<", width: "<<wheel.w_width<<", Bolt pattern: "<<wheel.bolt_pattern; return ost; 
}

string Wheel::to_string()
{
	return  "Type: "+type+" name: "+name+" Part number: "+std::to_string(part_number)+" Price: "+std::to_string(price)+", Category: "+category+" Color: "+color+" Diameter: "+std::to_string(w_diameter)+" Width: "+std::to_string(w_width)
	+" Bolt pattern: "+bolt_pattern+"\n";
}







