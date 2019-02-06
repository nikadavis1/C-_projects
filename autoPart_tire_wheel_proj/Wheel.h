#ifndef Wheel_H
#define Wheel_H
#include "nld2896_Auto_Part.h"

class Wheel : public virtual Auto_Part
{
public:
Wheel();
Wheel(string t,string n,int pn, double p, string cat, string c, int dia, int w,
string bp): category(cat), color(c), w_diameter(dia), w_width(w), bolt_pattern(bp)
,Auto_Part(t,n,pn,p) {};

void set_category(string);
void set_color(string);
void set_diameter(int);
void set_width(int);
void set_bolt_pattern(string);

string get_category();
string get_color();
int get_diameter();
int get_width();
string get_bolt_pattern(); 

friend std::ostream& operator<<(std::ostream&, const Wheel&);
string to_string();

protected:
string category;
string color;
int w_diameter;
int w_width;
string bolt_pattern;


};

#endif