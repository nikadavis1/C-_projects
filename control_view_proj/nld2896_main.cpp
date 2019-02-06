#include "nld2896_controller.h" 
#include <iostream> 
#include <vector>
int main() 
{ 
	std::vector<Auto_Part> parts; 
	Inventory inventory;
	
	View view{inventory};
	Controller controller{inventory, view};
	
	controller.cli();
	
return 0;
}