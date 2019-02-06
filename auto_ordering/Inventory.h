#include "Wheel_Tire_Combo.h"
#include "Battery.h"
#include "Windshield_Wiper.h"
#include "Frame.h"
#include "Engine.h"
#include <map>
#include "order.h"

class Inventory
{
	public:
		Inventory() {};
		void add_part(Auto_Part*);
		void add_parts(Auto_Part*, int);
		int get_num_parts(Auto_Part*);
		void remove_part(Auto_Part*);
		void remove_parts(Auto_Part*, int);
		void check_mult_orders(std::string);
		bool check_order(int,int);
		bool check_order2(Order order);
		std::map<Auto_Part*, int> get_inventory();
		void add_parts(int, int);
		void remove_parts(int, int);
		friend std::ostream& operator<< (std::ostream&, const Inventory&);
	private:
		std::map<Auto_Part*, int> inventory;
};
