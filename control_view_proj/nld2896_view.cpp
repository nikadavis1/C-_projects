#include "view.h"


void View::show_menu()
{
	std::string menu= R"(
	=====================
	Inverntory System
	=====================
	
	(1)View Inverntory
	(2)Add part to Inverntory
	(3)Add number of parts
	(4)Subtract number of parts
	(5)Remove part
	(6)Save Inverntory
	(7)Load Inverntory
	(0)Exit
	
	)";
	
	std::cout<<menu<<std::endl;
}

void View::show_parts()
{
	std::cout<<inventory;
}


void View::error()
{
	std::cout<<"Bad input\n";
}

void View::prompt()
{
	
	std::cout<<"Enter Auto type\n";
	std::cout<<"Enter Auto Part name\n";
	std::cout<<"Enter the auto part number\n";
	std::cout<<"Enter Price:\n";
	 
}


void View::prompt2()
{
	std::cout << "Which part do you wish to add to?\n";
	std::cout<<"Enter Auto type\n";
	std::cout<<"Enter Auto Part name\n";
	std::cout<<"Enter the auto part number\n";
	std::cout<<"Enter Price:\n";
	std::cout << "How many are you adding?"<<std::endl; 
}


void View::prompt3()
{
	std::cout << "Which part do you wish to subtract from?\n";
	std::cout<<"Enter Auto type\n";
	std::cout<<"Enter Auto Part name\n";
	std::cout<<"Enter the auto part number\n";
	std::cout<<"Enter Price:\n";
	std::cout << "How many are you subtracting?"<<std::endl; 

}




void View::prompt4()
{
	std::cout << "Which part do you wish to remove?\n";
	std::cout<<"Enter Auto type\n";
	std::cout<<"Enter Auto Part name\n";
	std::cout<<"Enter the auto part number\n";
	std::cout<<"Enter Price:\n"<< std::endl;

}