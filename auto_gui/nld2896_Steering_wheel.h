#include "nld2896_Auto_Part.h"

class Steering : public Auto_Part
{
	public:
		Steering(std::string t="", std::string n="", int pn=0, double p=0.0, std::string co="",std::string fb="", int dia=0) : Auto_Part(t,n,pn,p), color(co), fabric(fb), diameter(dia) {};
		std::string get_color();
		std::string get_fabric();
		int get_diameter();
		void set_color(std::string);
		void set_fabric(std::string);
		void set_diameter(int);
		std::string to_string();
		friend std::ostream& operator<<(std::ostream&, const Steering&);
	private:
		std::string color;
		std::string fabric;
		int diameter;
		
};