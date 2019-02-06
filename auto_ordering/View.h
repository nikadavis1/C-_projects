#include "Inventory.h"
#include "dialog.h"
#include <iostream>
#include <sstream>


class View
{
	public:
		View(Inventory& inv) : inventory(inv) {};
		int get_menu();
		void exit_prompt();
		void invalid_option();
		void view_all_inventory();
		void show_status1();
		void show_status2();
		std::string bill_info_prompt();
		std::string address_prompt();
		std::string customer_name();
		std::string file_name();
		int amount_prompt();
		int partnum_prompt();
		int new_old_prompt();
		int quantity_prompt();
		int select_part_type_prompt();
		std::string field_prompt(std::string);
		int part_number_selection();
	private:
		Inventory& inventory;
};
