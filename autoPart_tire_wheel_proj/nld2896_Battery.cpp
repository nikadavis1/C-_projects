#include "Battery.h"

Battery::Battery()
{
	Auto_Part();
	cranking_amps=0;
	cold_cranking_amps=0;
	voltage=0;
	reserve_capacity_minutes=0;
	
}

void Battery::set_cranking_amps(int ca)
{
	cranking_amps=ca;
}

void Battery::set_cold_cranking_amps(int cca)
{
	cold_cranking_amps=cca;
}

void Battery::set_voltage(int v)
{
	voltage=v;
}

void Battery::set_reserve_capacity_minutes(int rcm)
{
	reserve_capacity_minutes=rcm;
}

int Battery::get_cranking_amps()const
{
	return cranking_amps;
}

int Battery::get_cold_cranking_amps()const
{
	return cold_cranking_amps;
}

int Battery::get_voltage()const
{
	return voltage;
}

int Battery::get_reserve_capacity()const
{
	return reserve_capacity_minutes;
}

std::ostream& operator<<(std::ostream& ost, const Battery& battery)
{
	ost << " Cranking amps: " << battery.cranking_amps << ", Cold cranking amps: " << battery.cold_cranking_amps 
	<< ", voltage: " << battery.voltage << ", Reserve capacity mintutes: " << battery.reserve_capacity_minutes; return ost; 
}

std::string Battery::to_string()
{
	return  "Type: "+type+" name: "+name+" Part number: "+std::to_string(part_number)+" Price: "+std::to_string(price)+", "+" Cranking amps: "+std::to_string(cranking_amps)+", "+" Cold cranking amps: "+std::to_string(cold_cranking_amps)+", "+" voltage: "+std::to_string(voltage)
	+", "+" Reserve capacity mintutes: "+std::to_string(reserve_capacity_minutes)+"\n";
}











