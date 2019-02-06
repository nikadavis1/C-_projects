#ifndef TIRE_H
#define TIRE_H
#include "nld2896_Auto_Part.h"

class Tire : public virtual Auto_Part
{
public:
Tire();
Tire(string t,string n,int pn, double p, string tt, int w, int r, int dia,
string sr, string lr): tire_type(tt), width(w), ratio(r), diameter(dia), speed_rating(sr), load_range(lr), Auto_Part(t,n,pn,p) {};

void set_tire_type(string);
void set_width(int);
void set_ratio(int);
void set_diameter(int);
void set_speed_rating(string);
void set_load_range(string);

std::string get_tire_type();
int get_width()const;
int get_ratio()const;
int get_diameter()const;
std::string get_speed_rating();
std::string get_load_range();

friend std::ostream& operator<<(std::ostream&, const Tire&);
std::string to_string();

protected:
string tire_type;
int width;
int ratio;
int diameter;
string speed_rating;
string load_range;
};

#endif