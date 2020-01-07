#pragma once
#include"Vehicle.h"

class Motorcycle:public Vehicle
{
protected:
	int speed;

public:
	Motorcycle() {};

	void set_vehicle(string reg, string col, string make, int numOfWheels)
	{
		typeOfVehicle = "Motorcycle";
		registerNum = reg;
		color = col;
		maker = make;
		numberOfWheels = numOfWheels;
	}
	void set_extra_Feature(int spee) { speed = spee; };

	int get_speed() { return speed; }

	void  print_vehicle()
	{
		cout << "RegisterNum" << "     " << "Vehicle" << "     " << "Maker" << "     " << "Color" << "    " << "NumberOfWheels" << "   " << "Speed" << "\n\n";
		cout << "  " << registerNum << "       " << typeOfVehicle << "   " << maker << "     " << color << "           " << numberOfWheels << "            " << speed << "\n";
		cout << "----------------------------------------------------------------------\n\n";
	}

};

