
#include <iostream>
using namespace std;

class Auto_Part
{
public:

Auto_Part();

Auto_Part(string, string, int, double);

string get_type();

string get_name();

int get_part_number()const;

double get_price();

friend ostream&operator<<(ostream&, Auto_Part&);

void set_type(string);
 
void set_name(string);

void set_part(int);

void set_price(double);


private:
string type;
string name;
int part_number;
double price;


};
