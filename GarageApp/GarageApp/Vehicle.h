#pragma once

#include<string>
using namespace std;

class Vehicle
{
protected:
	string typeOfVehicle;
	string registerNum;
	string color;
	string maker;
	int numberOfWheels;

public:
	//Vehicle() {};

	virtual void set_vehicle(string reg, string col, string make, int numOfWheels) = 0; // Abstrakt klass//يجب على جميع الصفوف ان تحوي هذا التابع لانه =0
	virtual void set_extra_Feature() {};//لا يتوجب على جميع الصفوف ان تحتوي على هذا التابع 
	virtual void print_vehicle() {};
	virtual string get_model() { return "-----"; };

	

	virtual string get_TypeOfVehicle() { return typeOfVehicle; }

	virtual int get_numberOfPassengers() { return 0; };
	virtual int get_line() { return 0; };

	virtual int get_weight() { return 0; };
	virtual int get_high() { return 0; };

	string get_registerNum() { return registerNum; }
	string get_color() { return color; }
	string get_make() { return maker; }
	int get_numberOfWheels() { return numberOfWheels; }

	~Vehicle() {};

};

