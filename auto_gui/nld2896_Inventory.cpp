#include "nld2896_Inventory.h"
#include <fstream>



void Inventory::add_part(Auto_Part* part)
{
	if(inventory.count(part) == 1)
		inventory.at(part) = inventory.at(part)+1;
	else
		inventory.insert(std::pair<Auto_Part*,int>(part, 1));
}

void Inventory::add_parts(Auto_Part* part, int num)
{
	if(inventory.count(part) == 1)
		inventory.at(part) = inventory.at(part)+num;
	else
		inventory.insert(std::pair<Auto_Part*,int>(part, num));
}

bool Inventory::check_order2(Order order)
{
	std::map <int,int> cust_order=order.get_map();
	bool its_good=true;
	for (auto x: cust_order)
	{
		its_good= check_order(x.first, x.second);
		
		if(!its_good)
		{
			return its_good;
		}			
	}

	return its_good;
	
}

void Inventory::check_mult_orders(std::string file)
{
		std::string address, cust_name, bill_info;
		bool process;
		int pn, quantity, num_parts, order_number;
		
		Order order;
		
		std::ifstream loadFile;
		loadFile.open(file);
		while (loadFile.peek() != EOF)
		{
			getline(loadFile,cust_name);
			order.set_name(cust_name);
			getline(loadFile,address);
			order.set_add(address);
			getline(loadFile,bill_info);
			order.set_bill(bill_info);
			loadFile>>order_number;
			order.set_order_num(order_number);
			order.set_order_status("Not filled yet");
			loadFile >> num_parts;
			
			for(int i=0; i < num_parts; i++)
			{
				loadFile >> pn;
				loadFile >> quantity;
				order.set_order_partnum(pn,quantity);
			}
				process = check_order2(order);
		}
}



bool Inventory::check_order(int pn, int num)
{
	for (auto t : inventory)
		if((t.first)->get_part_number() == pn)
		
		 if((t.second) < num)
			{
				return false;
			}
		return true;
		
}


int Inventory::get_num_parts(Auto_Part* part)
{
	return inventory.at(part);
}

void Inventory::remove_part(Auto_Part* part)
{
	if(inventory.at(part) > 1)
		inventory.at(part) = inventory.at(part)-1;
	else
		inventory.erase(part);
}

void Inventory::remove_parts(Auto_Part* part, int num)
{
	if(inventory.at(part) > num)
		inventory.at(part) = inventory.at(part)-num;
	else
		inventory.erase(part);
}

std::ostream& operator<<(std::ostream& ost, const Inventory& inventory)
{
	if(inventory.inventory.size() == 0)
	{
		ost << "No parts in inventory" << std::endl;
		return ost;
	}
	
	for(auto x : inventory.inventory)
	{
		if((x.first)->get_type() == "tire")
		{
			Tire* tire = dynamic_cast<Tire*>(x.first);
			ost << *tire;
		}
		if((x.first)->get_type() == "wheel")
		{
			Wheel* wheel = dynamic_cast<Wheel*>(x.first);
			ost << *wheel;
		}
		if((x.first)->get_type() == "wtc")
		{
			Wheel_Tire_Combo* wtc = dynamic_cast<Wheel_Tire_Combo*>(x.first);
			ost << *wtc;
		}
		if((x.first)->get_type() == "battery")
		{
			Battery* battery = dynamic_cast<Battery*>(x.first);
			ost << *battery;
		}
		if((x.first)->get_type() == "windshield_wiper")
		{
			Windshield_Wiper* ww = dynamic_cast<Windshield_Wiper*>(x.first);
			ost << (*ww);
		}
		if((x.first)->get_type() == "frame")
		{
			Frame* frame = dynamic_cast<Frame*>(x.first);
			ost << *frame;
		}
		if((x.first)->get_type() == "engine")
		{
			Engine* engine = dynamic_cast<Engine*>(x.first);
			ost << *engine;
		}
		
		if((x.first)->get_type() == "seat")
		{
			Seat* seat = dynamic_cast<Seat*>(x.first);
			ost << *seat;
		}
		
		if((x.first)->get_type() == "door")
		{
			Door* door = dynamic_cast<Door*>(x.first);
			ost << *door;
		}
		
		if((x.first)->get_type() == "dashboard")
		{
			Dashboard* dash = dynamic_cast<Dashboard*>(x.first);
			ost << *dash;
		}
		
		if((x.first)->get_type() == "steering wheel")
		{
			Steering* steering = dynamic_cast<Steering*>(x.first);
			ost << *steering;
		}
		
		ost << " - " << inventory.inventory.at(x.first) << std::endl;
	

	}
}

std::map<Auto_Part*, int> Inventory::get_inventory()
{
	return inventory;
}

void Inventory::add_parts(int pn, int q)
{
	for(auto x : inventory)
	{
		if(x.first->get_part_number() == pn)
			inventory.at(x.first) += q;
	}
}

void Inventory::remove_parts(int pn, int q)
{
	for(auto x : inventory)
	{
		if(x.first->get_part_number() == pn)
		{
			if(inventory.at(x.first) > q)
				inventory.at(x.first) = inventory.at(x.first)-q;
	else
		inventory.erase(x.first);
		}
	}
}
