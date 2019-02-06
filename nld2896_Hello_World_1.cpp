#include <iostream>

using namespace std;

int main(){
	
std::string first_name; //declare varibles for first name
std::string last_name; //delcare varibles for last name

//Promot the user	
cout<<"Hello User\n";
cout<<"Please enter your first and last name.\n";
cin>>first_name>>last_name;	//Get name information from User
cout<<"Thank You "<<first_name<<" "<<last_name<<std::endl;//display thanks to user

int num1;
int num2;

cout<<"Please enter two numbers.\n";
cin>>num1>>num2;//input two numbers

//Execute the math in int for the user's numbers
cout<<"The sum is "<<num1+num2<<std::endl;//add num1 to num 2 
cout<<"The difference is "<<num1-num2<<std::endl;//subtract num1 from num 2
cout<<"The product is "<<num1*num2<<std::endl;//multiply num1 to num2
cout<<"The quotient is "<<num1/num2<<std::endl;//divide num1 from num2

double num3;
double num4;

cout<<"Please enter two more numbers.\n";
cin>>num3>>num4;//intput two numbers

//Execute the math in doubel for the user's numbers
cout<<"The sum is "<<num3+num4<<std::endl;
cout<<"The difference is "<<num3-num4<<std::endl; 
cout<<"The product is "<<num3*num4<<std::endl;
cout<<"The quotient is "<<num3/num4<<std::endl;
cout<<"Thank You "<<first_name<<" "<<last_name<<" for your entries.\n";
return 0;	
	
}
