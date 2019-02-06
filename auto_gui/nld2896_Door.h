#include "nld2896_Auto_Part.h"

class Door : public Auto_Part
{
	public:
		Door(std::string t="", std::string n="", int pn=0, double p=0.0, std::string co="",std::string me="") : Auto_Part(t,n,pn,p), color(co), metal(me) {};
		std::string get_color();
		std::string get_metal();
		void set_color(std::string);
		void set_metal(std::string);
		
		std::string to_string();
		friend std::ostream& operator<<(std::ostream&, const Door&);
	private:
		std::string color;
		std::string metal;
		
		
};