#include "nld2896_Auto_Part.h"
#include <vector>
#include <iomanip>

int main()
{

Auto_Part p;

vector<string> Auto_type;
vector<string> Auto_name;
vector<int>Auto_number;
vector<double>Auto_pric;

int num_auto;
string Auto_par;
string Auto_nam;
int Auto_num;
double Auto_price;
double avg_price;
double total_price;

cout<<"How many auto parts do you want to create?\n";
cin>>num_auto;

for(int i=0; i<num_auto; i++)
{
	cout<<"What type of part are you looking for? : "<<endl;
	cin>>Auto_par;
	p.set_type(Auto_par);
	
	cout<<"What is the name of the part?: "<<endl;
	cin>>Auto_nam;
	p.set_name(Auto_nam);
	
	cout<<"What is the Auto number?: "<<endl;
	cin>>Auto_num;
	p.set_part(Auto_num);
	
	cout<<"What is the price of the part?: "<<endl;
	cin>>Auto_price;
	p.set_price(Auto_price);
	
	
	Auto_type.push_back(p.get_type());
	Auto_name.push_back(p.get_name());
	Auto_number.push_back(p.get_part_number());
	Auto_pric.push_back(p.get_price());
	cout<<p<<endl<<endl<<endl;
}	

for(int k=0; k < Auto_pric.size(); k++)
{
	total_price+=Auto_pric[k];
}

avg_price=total_price/Auto_pric.size();
cout<<"The average price for the auto parts is: "<<fixed<<setprecision(2);
cout<<"$"<<avg_price<<endl;




return 0;
}
