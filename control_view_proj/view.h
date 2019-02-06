#include "nld2896_Inventory.h"

class View
{

public:

	View(Inventory& i) : inventory(i) {};
	void show_menu();
	void show_parts();
	void error();
	void prompt2();
	void prompt3();
	void prompt4();
	void prompt();

private:
	Inventory& inventory;

};