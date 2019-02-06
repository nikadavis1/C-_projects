#include "Tire.h"

Tire::Tire()
{
	Auto_Part();
	tire_type="null";
	width=0;
	ratio=0;
	diameter=0;
	speed_rating="null";
	load_range="null";
}

void Tire::set_tire_type(string tt)
{
	tire_type=tt;
}

void Tire::set_width(int ww)
{
	width=ww;
}

void Tire::set_ratio(int r)
{
	ratio=r;
}

void Tire::set_diameter(int dia)
{
	diameter=dia;
}

void Tire::set_speed_rating(string sr)
{
	speed_rating=sr;
}

void Tire::set_load_range(string lr)
{
	load_range=lr;
}

string Tire:: get_tire_type()
{
	return tire_type;
}

int Tire::get_width()const
{
	return width;
}

int Tire::get_ratio()const
{
	return ratio;
}	

int Tire::get_diameter()const
{
	return diameter;
}

string Tire::get_speed_rating() 
{
	return speed_rating;
}

string Tire::get_load_range()
{
	return load_range;
}

std::ostream& operator<<(std::ostream& ost, const Tire& tire)
{
	 ost << "Tire type: " << tire.tire_type << ", Width: " << tire.width << ", ratio: " << tire.ratio << ", diameter: " << 
	tire.diameter<<", speed rating: "<<tire.speed_rating<<", load range: "<<tire.load_range; return ost; 
}

std::string Tire::to_string()
{
	return  "Type: "+type+" name: "+name+" Part number: "+std::to_string(part_number)+" Price: "+std::to_string(price)+", "+"Tire Type: "+tire_type+" width: "+std::to_string(width)+", "+" ratio: "+std::to_string(ratio)
	+" diameter: "+std::to_string(diameter)+" speed rating: "+speed_rating+" load range: "+load_range+"\n";
}