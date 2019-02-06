#include "nld2896_controller.h"
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


void Controller::cli()
{
	
	int cmd=-1;
	do{
	view.show_menu();
	std::cin>>cmd;
	excute_cmd(cmd);
	}
	while(cmd > 0);
	

}

void Controller::excute_cmd(int c)
{
	switch(c)
	{
		case 0:
		break;
		case 1:
		view.show_parts();
		break;
		case 2:
		add_part();
		break;
		case 3:
		increase();
		break;
		case 4:
		decrease();
		break;
		case 5:
		remove_part();
		break;
		case 6:
		save();
		break;
		case 7:
		load();
		break;
		default:
		view.error();
		
	}
	
}

void Controller::add_part()
{
	std::string type; 
	std::string name;
	int part_number; 
	double price;
	
	view.prompt();
	
	std::cin>>type;
	std::cin>>name;
	std::cin>>part_number;
	std::cin>>price;

	inventory.add_part(Auto_Part(type, name, part_number, price));
}

void Controller::increase()
{
	int num;
	std::string type; 
	std::string name;
	int part_number; 
	double price;
	
	view.prompt2();
	
	std::cin>>type;
	std::cin>>name;
	std::cin>>part_number;
	std::cin>>price;
	std::cin>>num;
	inventory.add_parts(Auto_Part(type, name, part_number, price), num);

}

void Controller::decrease()
{
	int num;
	std::string type; 
	std::string name;
	int part_number; 
	double price;
	
	view.prompt2();
	
	std::cin>>type;
	std::cin>>name;
	std::cin>>part_number;
	std::cin>>price;
	std::cin>>num;
	inventory.remove_parts(Auto_Part(type, name, part_number, price), num); 

}




void Controller::remove_part()
{
	std::string type; 
	std::string name;
	int part_number; 
	double price;
	
	view.prompt3();
	
	std::cin>>type;
	std::cin>>name;
	std::cin>>part_number;
	std::cin>>price;
	
	inventory.remove_part(Auto_Part(type, name, part_number, price));

}

void Controller::save()
{
	ofstream saveInventory;
	ifstream takeInventory;
	saveInventory.open("nld2896_save_file.txt");
	saveInventory<< inventory;
	saveInventory.close();
	
}
	
	
void Controller::load()
{

	
	ifstream takeInventory;
	takeInventory.open("nld2896_save_file.txt");
	string line();
	if(takeInventory.is_open())
	{
		for(int i =0; i<= inventory.get_size(); i++)
		{
			string type, name, skip1, skip2, skip3, skip4;
			int pn, amount;
			double price;
			takeInventory >> skip1 >> type>> skip2 >> name >> skip3 >> pn >> skip4 >> price
			>> amount;
			
			inventory.add_parts(Auto_Part(type,name,pn,price),amount);
		}
	
	
	takeInventory.close();
	}
	else
		cout<<"File did not open\n";

}