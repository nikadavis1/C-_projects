#include "View.h"

int View::get_menu()
{
	

	
/*std::string menu = R"(
============================
CSE 1325 Auto Part Inventory
============================

1) View All Parts
2) Add Part(s)
3) Remove Part(s)
4) Load from file
5) Save to file
0) Exit

?)";
	
	std::string cmd_str = Dialogs::input(menu, "Main Menu", "", "0");
	std::istringstream iss (cmd_str);
	int cmd;
	iss >> cmd;
	return cmd;*/
}

void View::exit_prompt()
{
	std::cout << "Terminating Program" << std::endl;
}

void View::invalid_option()
{
	Dialogs::message("Please selection a valid option.","Invalid option");
}

void View::view_all_inventory()
{
	std::ostringstream oss;
	oss << inventory;
	Dialogs::message(oss.str(), "Inventory");	
}

int View::new_old_prompt()
{
	std::string new_menu = "Is this a new or existing part?\n1)New\n2)Existing\n?";
	std::string cmd_str = Dialogs::input(new_menu, "New Part?", "", "1");
	std::istringstream iss (cmd_str);
	int cmd;
	iss >> cmd;
	return cmd;
}

std::string View::address_prompt()
{
	std::string address=R"(
	Enter your address:)";
	
	std::string result = Dialogs::input(address, "Customer's address","","1");
	std::istringstream iss (result);
	std::string cust_add;
	iss >> cust_add;
	return cust_add;
}

std::string View::bill_info_prompt()
{
	std::string bill_info=R"(
	Enter your billing information:)";
	
	std::string result = Dialogs::input(bill_info, "Customer's address","","1");
	std::istringstream iss (result);
	std::string cust_bill;
	iss >> cust_bill;
	return cust_bill;
}

std::string View::customer_name()
{
	std::string name=R"(
	Enter your name:)";
	
	std::string result = Dialogs::input(name, "Customer's address","","1");
	std::istringstream iss (result);
	std::string cust_name;
	iss >> cust_name;
	return cust_name;
}

std::string View::file_name()
{
	std::string file=R"(
	Enter file:)";
	
	std::string result = Dialogs::input(file, "Customer's address","","1");
	std::istringstream iss (result);
	std::string file_name;
	iss >> file_name;
	return file_name;
}


int View::amount_prompt()
{
	std::string amount=R"(
	Enter the number of different auto parts you want to order:)";
	
	std::string result = Dialogs::input(amount, "Customer's address","","1");
	std::istringstream iss (result);
	int cust_order;
	iss >> cust_order;
	return cust_order;
}

int View::partnum_prompt()
{
	std::string part_num=R"(
	Enter the part number for the parts being order:)";
	
	std::string result = Dialogs::input(part_num, "Customer's address","","1");
	std::istringstream iss (result);
	int num;
	iss >> num;
	return num;
}

int View::quantity_prompt()
{
	std::string quantity=R"(
	Enter the number of parts you wish the order:)";
	
	std::string result = Dialogs::input(quantity, "Customer's address","","1");
	std::istringstream iss (result);
	int quant;
	iss >> quant;
	return quant;
}

void View::show_status1()
{
	Order order;
	
	std::string order_stat="order has been filled\n";
	order.set_order_status(order_stat);
	
	std::string status=order.get_order_status();
	Dialogs::message(status,"order status");
}

void View::show_status2()
{
	Order order;
	
	std::string order_stat="order has been rejected\n";
	order.set_order_status(order_stat);
	
	std::string status=order.get_order_status();
	Dialogs::message(status,"order status");
}


int View::select_part_type_prompt()
{
	std::string part_menu = "Select Part Type.\n1)Battery\n2)Engine\n3)Frame\n4)Tire\n5)Wheel\n6)Wheel Tire Combo\n7)Windshield Wiper\n?";
	std::string cmd_str = Dialogs::input(part_menu, "Select Part Type", "", "1");
	std::istringstream iss (cmd_str);
	int cmd;
	iss >> cmd;
	return cmd;
}

std::string View::field_prompt(std::string field)
{
	std::string field_msg = "Input " + field;
	std::string field_rst = Dialogs::input(field_msg, "Field Entry", "", "");
	return field_rst;
}

int View::part_number_selection()
{
	std::ostringstream oss;
	oss << inventory;
	std::string inventory_str = oss.str();
	inventory_str = inventory_str + "\nInput Part Number";
	std::string temp = Dialogs::input(inventory_str, "Part Selection", "", "");
	std::istringstream iss(temp);
	int pn;
	iss >> pn;
	return pn;
}

