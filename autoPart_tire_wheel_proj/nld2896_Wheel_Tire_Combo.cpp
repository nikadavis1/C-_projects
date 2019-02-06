#include "Wheel_Tire_Combo.h"

Wheel_Tire_Combo::Wheel_Tire_Combo()
{
	Auto_Part();
	//Wheel();
	//Tire();
}

std::ostream& operator<<(std::ostream& ost, const Wheel_Tire_Combo& wt)
{
	 ost <<"Type: " << wt.type << ", Name: " << wt.name << ", Part Numer: " << wt.part_number << ", Price: " << 
	std::put_money(wt.price)<< "Tire type: " << wt.tire_type << ", Width: " << wt.width << ", ratio: " << wt.ratio << ", diameter: " << 
	wt.diameter<<", speed rating: "<<wt.speed_rating<<", load range: "<<wt.load_range<<"Category: " << wt.category << ", Color: " << wt.color << ", diameter: " << 
	wt.w_diameter<<", width: "<<wt.w_width<<", Bolt pattern: "<<wt.bolt_pattern; return ost; 
}


std::string Wheel_Tire_Combo::to_string()
{
	return  "Type: "+type+" name: "+name+" Part number: "+std::to_string(part_number)+" Price: "+std::to_string(price)+"\n"+
	"Tire Type: "+tire_type+" width: "+std::to_string(width)+" ratio: "+std::to_string(ratio)
	+" diameter: "+std::to_string(diameter)+" speed rating: "+speed_rating+" load range: "+load_range+"\n"
	+"Category: "+category+" Color: "+color+" Diameter: "+std::to_string(w_diameter)+" Width: "+std::to_string(w_width)
	+" Bolt pattern: "+bolt_pattern+"\n";
}