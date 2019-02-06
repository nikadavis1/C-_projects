#include "Windshield_Wiper.h"

Windshield_Wiper::Windshield_Wiper()
{
	Auto_Part();
	length=0;
	frame_type="null";
}

void Windshield_Wiper::set_length(int l)
{
	length=l;
}

void Windshield_Wiper::set_frame_type(string ww)
{
	frame_type=ww;
}

int Windshield_Wiper::get_length()
{
	return length;
}

string Windshield_Wiper::get_frame_type()
{
	return frame_type;
}

std::ostream& operator<<(std::ostream& ost, const Windshield_Wiper& windshield_wiper)
{
	ost << "Length: " << windshield_wiper.length << ", Frame type: " << windshield_wiper.frame_type; return ost;
}

string Windshield_Wiper::to_string()
{
	return  "Type: "+type+" name: "+name+" Part number: "+std::to_string(part_number)+", "+" Price: "+std::to_string(price)+", "+"Length: "+std::to_string(length)+", "+" Frame type: "+frame_type+"\n";
}