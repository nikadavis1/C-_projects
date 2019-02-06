#include "nld2896_View.h"
#include <fstream>
//#include <ios_base>

class Controller
{
	public:
		Controller(Inventory& inv, View& v) : inventory(inv), view(v) {};
		void gui();
		void execute_cmd(int);
		void add_part();
		void order();
		void order2();
		void remove_part();
		void load_file();
		void save_file();
	private:
		Inventory& inventory;
		View& view;
};
