#include "Tire.h"
#include "Wheel.h"


class Wheel_Tire_Combo : public Wheel, public Tire
{
	public:
	Wheel_Tire_Combo();
	Wheel_Tire_Combo(string t,string n,int pn, double p, string tt, int w, int r, int dia,
	string sr, string lr,string cat, string c, int w_dia, int w_w,
	string bp): Auto_Part(t,n,pn,p), Tire(t,n,pn,p,tt,w,r,dia,sr,lr),Wheel(t,n,pn,p,cat,c,w_dia,w_w,bp) {};
	
	
	friend std::ostream& operator<<(std::ostream&, const Wheel_Tire_Combo&);
	std::string to_string();
	
	

};