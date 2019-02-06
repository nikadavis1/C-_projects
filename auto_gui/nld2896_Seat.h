#include "nld2896_Auto_Part.h"

class Seat : public Auto_Part
{
	public:
		Seat(std::string t="", std::string n="", int pn=0, double p=0.0, std::string de="", std::string co="", std::string fab="") : Auto_Part(t, n, pn, p), design(de), color(co), fabric(fab) {};
		std::string get_design();
		std::string get_color();
		std::string get_fabric();
		void set_design(std::string);
		void set_color(std::string);
		void set_fabric(std::string);
		std::string to_string();
		friend std::ostream& operator<<(std::ostream&, const Seat&);
	private:
		std::string design;
		std::string color;
		std::string fabric;
};