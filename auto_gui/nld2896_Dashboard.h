#include "nld2896_Auto_Part.h"

class Dashboard : public Auto_Part
{
	public:
		Dashboard(std::string t="", std::string n="", int pn=0, double p=0.0, std::string cl="",std::string fg="", std::string tg="", std::string vm="" ) : Auto_Part(t,n,pn,p), light_color(cl), fuel_gauge(fg), temperature_gauge(tg), voltmeter(vm) {};
		std::string get_light_color();
		std::string get_fuel_gauge();
		std::string get_temperature_gauge();
		std::string get_voltmeter();
		void set_light_color(std::string);
		void set_fuel_gauge(std::string);
		void set_temperature_gauge(std::string);
		void set_voltmeter(std::string);
		std::string to_string();
		friend std::ostream& operator<<(std::ostream&, const Dashboard&);
	private:
		std::string light_color;
		std::string fuel_gauge;
		std::string temperature_gauge;
		std::string voltmeter;
};