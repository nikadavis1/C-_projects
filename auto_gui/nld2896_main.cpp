#include "nld2896_Window.h"
#include <thread>

using namespace std;

int main(int argc, char* argv[])
{
	auto app = Gtk::Application::create(argc, argv, "edu.uta.cse1325.HW9");
	
	Inventory inventory;
	 
	View view(inventory);
	
	Controller controller(inventory, view);
	
	//controller.gui();
	
	Window wind;

	return app->run(wind);
	
	
	
	
}
