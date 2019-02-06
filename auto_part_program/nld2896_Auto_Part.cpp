#include "nld2896_Auto_Part.h"



Auto_Part::Auto_Part()
{
	type= "tire";
	name= "Firestone Firehawk";
	part_number= 4215;
	price = 250.99;
}

Auto_Part::Auto_Part(string t, string n, int pn, double p)
{
	type=t;
	name=n;
	part_number=pn;
	price=p;
}


string Auto_Part::get_type()
{
	return type;
}

string Auto_Part::get_name()
{
	return name;
}

int Auto_Part::get_part_number()const
{
	return part_number;
}

double Auto_Part::get_price()
{
	return price;
}

void Auto_Part::set_type(string t)
{
	type=t;
}
 
 void Auto_Part::set_name(string n)
 {
	name=n;
 }
 
 void Auto_Part::set_part(int pn)
 {
	part_number=pn;
 }
 
 void Auto_Part::set_price(double p)
 {
	price=p;
 }
 
 
 
 
 /*string to_string()const 
{
	return to_string(type)+""+to_string(name)+""+to_string(part_number)+""+to_string(price);
}*/


std::ostream& operator<<(std::ostream& ost, Auto_Part& part)
{
	ost<<"Type: "<<part.type<<",Name: "<<part.name<<",Part number: "<<part.part_number<<",Price: "<<part.price;

}
