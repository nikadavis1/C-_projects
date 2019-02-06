#include <iostream>
#include <map>

class Order
{
	public:
	
	Order(std::string n="",std::string add="",int on=0,std::string b="",std::string os=""):name(n),address(add),order_num(on),bill_info(b),order_status(os) {};
	void set_name(std::string);
	void set_add(std::string);
	void set_order_num(int);
	void set_order_status(std::string);
	void set_bill(std::string);
	void set_order_partnum(int,int);
	std::string get_order_status();
	std::string get_name();
	std::string get_add();
	std::map<int, int> get_map();
	int get_order_num();
	
	std::string get_bill();
	
	
	
	private:
	std::string name;
	std::string address;
	int order_num;
	std::string order_status;
	std::map<int, int> part_num;
	std::string bill_info;

};