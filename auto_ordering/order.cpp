#include "order.h"

void Order::set_name(std::string n)
{
	name = n;
}

void Order::set_add(std::string add)
{
	address = add;
}

void Order::set_order_num(int on)
{
	order_num = on;
}

void Order::set_bill(std::string bill)
{
	bill_info = bill;
}

void Order::set_order_status(std::string os)
{
	order_status=os;
}

void Order::set_order_partnum(int pn,int num)
{
	part_num.insert(std::pair<int,int>(pn, num));
}
std::map<int,int> Order::get_map()
{
	return part_num;
}

std::string Order::get_order_status()
{
	return order_status;
}


std::string Order::get_name()
{
	return name;
}

std::string Order::get_add()
{
	return address;
}

int Order::get_order_num()
{
	return order_num;
}	

std::string Order::get_bill()
{
	return bill_info;
}
