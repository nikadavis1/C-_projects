#include "nld2896_Auto_Part.h"

class Windshield_Wiper : public Auto_Part
{
public:
Windshield_Wiper();
Windshield_Wiper(string t,string n,int pn, double p, int l, string ft): length(l), frame_type(ft)
,Auto_Part(t,n,pn,p) {};

void set_length(int);
void set_frame_type(string);

int get_length();
string get_frame_type();

friend std::ostream& operator<<(std::ostream&, const Windshield_Wiper&);
string to_string();


protected:
int length;
string frame_type;
};