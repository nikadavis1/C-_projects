#include "nld2896_Controller.h"

void Controller::gui()
{
	int cmd = 0;
	do{
		cmd = view.get_menu();
		execute_cmd(cmd);
	}while(cmd != 0);
}



void Controller::execute_cmd(int cmd)
{
	switch(cmd)
	{
		case 1:
			view.view_all_inventory();
			break;
		case 2:
			add_part();
			break;
		case 3:
			remove_part();
			break;
		case 4:
			load_file();	
			break;
		case 5:
			save_file();
			break;
		case 0:
			view.exit_prompt();
			break;
		default:
			view.invalid_option();
			break;
	}
}

void Controller::add_part()
{
	int new_old;
	new_old = view.new_old_prompt();
	if(new_old == 1)
	{
		std::string temp;
		int part_type;
		part_type = view.select_part_type_prompt();
		std::string type;
		std::string name;
		int part_number;
		double price;
		int quantity;
		name = view.field_prompt("part name");
		temp = view.field_prompt("part number");
		std::istringstream iss(temp);
		iss >> part_number;
		temp = view.field_prompt("price");
		iss.clear();
		iss.str(temp);
		iss >> price;
		temp = view.field_prompt("quantity");
		iss.clear();
		iss.str(temp);
		iss >> quantity;
		if(part_type == 1)
		{
			type = "battery";
			int ca, cca, v, rcm;
			temp = view.field_prompt("cranking amps");
			iss.clear();
			iss.str(temp);
			iss >> ca;
			temp = view.field_prompt("cold cranking amps");
			iss.clear();
			iss.str(temp);
			iss >> cca;
			view.field_prompt("voltage");
			iss.clear();
			iss.str(temp);
			iss >> v;
			view.field_prompt("reserve capacity minutes");
			iss.clear();
			iss.str(temp);
			iss >> rcm;
			Auto_Part* part = new Battery(type, name, part_number, price, ca, cca, v, rcm);
			inventory.add_parts(part, quantity);
		}
		else if(part_type == 2)
		{
			type = "engine";
			int nc;
			std::string ft;
			view.field_prompt("number of cylinders");
			iss.clear();
		iss.str(temp);
		iss >> nc;
			ft = view.field_prompt("fuel type");
			Auto_Part* part = new Engine(type, name, part_number, price, nc, ft);
			inventory.add_parts(part, quantity);
		}
		else if(part_type == 3)
		{
			type = "frame";
			std::string ft;
			ft = view.field_prompt("frame type");
			Auto_Part* part = new Frame(type, name, part_number, price, ft);
			inventory.add_parts(part, quantity);
		}
		else if(part_type == 4)
		{
			type = "tire";
			int w, r, d;
			std::string tt, sr, lr;
			tt=view.field_prompt("tire type");
			view.field_prompt("width");
			iss.clear();
		iss.str(temp);
		iss >> w;
			view.field_prompt("ratio");
			iss.clear();
		iss.str(temp);
		iss >> r;
			view.field_prompt("diameter");
			iss.clear();
		iss.str(temp);
		iss >> d;
			sr = view.field_prompt("speed rating");
			lr = view.field_prompt("load range");
			Auto_Part* part = new Tire(type, name, part_number, price, tt, w, r, d, sr, lr);
			inventory.add_parts(part, quantity);
		}
		else if(part_type == 5)
		{
			type = "wheel";
			int wd, ww;
			std::string cat, c, bp;
			cat = view.field_prompt("category");
			c = view.field_prompt("color");
			view.field_prompt("wheel diameter");
			iss.clear();
		iss.str(temp);
		iss >> wd;
			view.field_prompt("wheel width");
			iss.clear();
		iss.str(temp);
		iss >> ww;
			bp = view.field_prompt("bolt pattern");
			Auto_Part* part = new Wheel(type, name, part_number, price, cat, c, wd, ww, bp);
			inventory.add_parts(part, quantity);
		}
		else if(part_type == 6)
		{
			type = "wtc";
			int wd, ww;
			std::string cat, c, bp;
			cat = view.field_prompt("category");
			c = view.field_prompt("color");
			view.field_prompt("wheel diameter");
			iss.clear();
		iss.str(temp);
		iss >> wd;
			view.field_prompt("wheel width");
			iss.clear();
		iss.str(temp);
		iss >> ww;
			bp = view.field_prompt("bolt pattern");
			int w, r, d;
			std::string tt, sr, lr;
			tt=view.field_prompt("tire type");
			view.field_prompt("width");
			iss.clear();
		iss.str(temp);
		iss >> w;
			view.field_prompt("ratio");
			iss.clear();
		iss.str(temp);
		iss >> r;
			view.field_prompt("diameter");
			iss.clear();
		iss.str(temp);
		iss >> d;
			sr = view.field_prompt("speed rating");
			lr = view.field_prompt("load range");
			Auto_Part* part = new Wheel_Tire_Combo(type, name, part_number, price, cat, c, wd, ww, bp, tt, w, r, d, sr, lr);
			inventory.add_parts(part, quantity);
		}
		else if(part_type == 7)
		{
			type = "windshield_wiper";
			int l;
			std::string ft;
			view.field_prompt("length");
			iss.clear();
		iss.str(temp);
		iss >> l;
			ft = view.field_prompt("frame time");
			Auto_Part* part = new Windshield_Wiper(type, name, part_number, price, l, ft);
			inventory.add_parts(part, quantity);
		}
	
		else if(part_type == 8)
		{
			type = "Seat";
			std::string de,co,fab;
			
			de= view.field_prompt("Design");
			co= view.field_prompt("Color");
			fab= view.field_prompt("Fabric");
			Auto_Part* part = new Seat(type, name, part_number, price, de, co, fab);
			inventory.add_parts(part, quantity);
		}
	
		else if(part_type == 9)
		{
			type = "Door";
			std::string co,metal;
		
			co= view.field_prompt("Color");
			metal= view.field_prompt("Metal");
			
			Auto_Part* part = new Door(type, name, part_number, price, co, metal);
			inventory.add_parts(part, quantity);
		}
	
		else if(part_type == 10)
		{
			type = "Steering Wheel";
			std::string co,fabric;
			int dia;
		
			co= view.field_prompt("Color");
			fabric= view.field_prompt("Fabric");
			
			view.field_prompt("diameter");
			iss.clear();
			iss.str(temp);
			iss >> dia;
			
			Auto_Part* part = new Steering(type, name, part_number, price, co, fabric, dia);
			inventory.add_parts(part, quantity);
		}
	
		else if(part_type == 11)
		{
			type = "Dashboard";
			std::string light_co,fuel_g,tg,volt;
			
			light_co= view.field_prompt("Light  color");
			fuel_g= view.field_prompt("Fual gauge");
			tg=view.field_prompt("temperature gauge");
			volt=view.field_prompt("Voltmeter");
			
			Auto_Part* part = new Dashboard(type, name, part_number, price, light_co, fuel_g, tg, volt);
			inventory.add_parts(part, quantity);
		}
	
	}
	else
	{
		
		int pn, quantity;
		pn = view.part_number_selection();
		std::string temp = view.field_prompt("quantity");
		std::istringstream iss(temp);
		iss >> quantity;
		inventory.add_parts(pn,quantity);
	}
}


void Controller::remove_part()
{
	int pn, quantity;
		pn = view.part_number_selection();
		std::string temp = view.field_prompt("quantity");
		std::istringstream iss(temp);
		iss >> quantity;
	inventory.remove_parts(pn,quantity);
}

void Controller::order()
{
	int pn,numparts,ordernum,quantity;
	std::string address,bill_info,cust_name,order_stat;
	Order order; //object for the order class
	
	address=view.address_prompt(); //prompting for the address and setting the address variable
	order.set_add(address);        //calling the set address function
	
	bill_info=view.bill_info_prompt();//prompting for the billing information and setting the variable
	order.set_bill(bill_info);        //calling the set billing info function
	
	order_stat="not yet processed";   //stating that the order have not yet processed
	order.set_order_status(order_stat);    
	
	cust_name=view.customer_name();   //prompting for the custermor's name
	order.set_name(cust_name);
	
	numparts=view.amount_prompt();    //asking for the number of parts being ordered
	
	for(int i=0; i<numparts;i++)      //loop through the number of different parts being ordered
	{
		pn=view.partnum_prompt();     //set the part numbers being ordered
		quantity=view.quantity_prompt();   //set the amount of parts being ordered
		order.set_order_partnum(pn,quantity);
	}

	if(inventory.check_order2(order))  //checks to see if the order can be processed
	{
		inventory.remove_parts(pn,quantity);
		view.show_status1();
	}
	else
	{
		view.show_status2();
	}
}

void Controller::order2()
{
	
	std::string file;
	file=view.file_name();
	inventory.check_mult_orders(file);
}



void Controller::load_file()
{
	std::ifstream ifs("save_file.txt");
	
	if(ifs.is_open())
	{
		std::string type;
		std::string name;
		int part_number;
		double price;
		int quantity;
		while(ifs >> type)
		{
			ifs >> name >> part_number >> price >> quantity;
			if(type == "battery")
			{
				int ca, cca, v, rcm;
				ifs >> ca;
				ifs >> cca;
				ifs >> v;
				ifs >> rcm;
				Auto_Part* part = new Battery(type, name, part_number, price, ca, cca, v, rcm);
				inventory.add_parts(part, quantity);
			}
			else if(type == "engine")
			{
				int nc;
				std::string ft;
				ifs >> nc >> ft;
				Auto_Part* part = new Engine(type, name, part_number, price, nc, ft);
				inventory.add_parts(part, quantity);
			}
			else if(type == "frame")
			{
				std::string ft;
				ifs >> ft;
				Auto_Part* part = new Frame(type, name, part_number, price, ft);
				inventory.add_parts(part, quantity);
			}
			else if(type == "tire")
			{
				std::string tt, sr, lr;
				int w, r, d;
				ifs >> tt >> w >> r >> d >> sr >> lr;
				Auto_Part* part = new Tire(type, name, part_number, price, tt, w, r, d, sr, lr);
				inventory.add_parts(part, quantity);
			}
			else if(type == "wheel")
			{
				std::string cat, c, bp;
				int wd, ww;
				ifs >> cat >> c >> wd >> ww >> bp;
				Auto_Part* part = new Wheel(type, name, part_number, price, cat, c, wd, ww, bp);
				inventory.add_parts(part, quantity);
			}
			else if(type == "wtc")
			{
				std::string cat, c, bp;
				int wd, ww;
				ifs >> cat >> c >> wd >> ww >> bp;
				std::string tt, sr, lr;
				int w, r, d;
				ifs >> tt >> w >> r >> d >> sr >> lr;
				Auto_Part* part = new Wheel_Tire_Combo(type, name, part_number, price, cat, c, wd, ww, bp, tt, w, r, d, sr, lr);
				inventory.add_parts(part, quantity);
			}
			else if("Windshield Wiper")
			{
				int l;
				std::string ft;
				ifs >> l >> ft;
				Auto_Part* part = new Windshield_Wiper(type, name, part_number, price, l, ft);
				inventory.add_parts(part, quantity);
			}
		
			else if("Seat")
			{
				std::string design, color, fabric;
				ifs >> design >> color >> fabric;
				Auto_Part* part = new Seat(type, name, part_number, price, design, color, fabric);
				inventory.add_parts(part, quantity);
			}
			
			else if("Dashboard")
			{
				std::string light_c,fuel_g,tg,volt;
				ifs >> light_c >> fuel_g>>tg>>volt;
				Auto_Part* part = new Dashboard(type, name, part_number, price, light_c, fuel_g,tg,volt);
				inventory.add_parts(part, quantity);
			}
			
			else if("Door")
			{
				std::string color,metal;
				ifs >> color >> metal;
				Auto_Part* part = new Door(type, name, part_number, price, color, metal);
				inventory.add_parts(part, quantity);
			}
		
			else
			{
				int dia;
				std::string color,fabric;
				ifs >> color >> fabric>>dia;
				Auto_Part* part = new Steering(type, name, part_number, price, color, fabric,dia);
				inventory.add_parts(part, quantity);
			}
		
		
		}
		ifs.close();
	}
	else
		std::cout << "file did not open" << std::endl;
}

void Controller::save_file()
{
	std::ofstream ofs("save_file.txt", std::ofstream::trunc);
	
	for(auto x : inventory.get_inventory())
	{
		ofs << (x.first)->to_string() << " " << x.second << std::endl;
	}
	
	ofs.close();
}
