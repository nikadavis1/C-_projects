#include "Windshield_Wiper.h"
#include "Wheel_Tire_Combo.h"
//#include "Tire.h"
//#include "Wheel.h"
#include "Battery.h"
#include <vector>

int main()
{
	
	
	
	Auto_Part part{"Cup holder, ", "Ford, ",34444,123.50};
	cout<<part.to_string();
	cout<<endl;
	
	Tire tire{"Tire, ","Firestone, ",555,23.50,"Drag tire, ",34,33,45,"160 mph, ","40 psi"};
	cout<<tire.to_string();
	cout<<endl;
	
	Battery battery{"Battery","Firestone",324,32.45,45,67,56,67};
	cout<<battery.to_string();
	cout<<endl;
	
	Wheel wheel{"Wheel, ","Firestonr, ",231,23.45,"Standard, ","red, ",45,34,"six lug"};
	cout<<wheel.to_string();
	cout<<endl;
	
	Windshield_Wiper wind{"Windshield Wiper, ","Firestone, ",456,56.78,56,"Frame, "};
	cout<<wind.to_string();
	cout<<endl;
	
	Wheel_Tire_Combo wt{"Tire, Wheel, ","Firestone, ",45567,45.67,"Drag tire, ",34,33,45,"160 mph, ","40 psi, ","Wheel, ",
	"Firestone, ",231,23,"six lug"};
	cout<<wt.to_string();
	
	
	
	
	return 0;
}