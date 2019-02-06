#include "view.h"

class Controller
{
public:
Controller(Inventory& i, View& v)  : 
inventory(i), view(v) {};
void cli();
void excute_cmd(int);
void add_part();
void increase();
void decrease();
void remove_part();
void save();
void load();

private:
Inventory& inventory;
View& view;


};