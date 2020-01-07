#pragma once
#include"Vehicle.h"

class Truck:public Vehicle
{
protected:
	int weight;
	int high;

public:

	void set_vehicle(string reg, string col, string make, int numOfWheels) {
		typeOfVehicle = "Truck";
		registerNum = reg;
		color = col;
		maker = make;
		numberOfWheels = numOfWheels;
	}
	void set_extra_Feature(int weigh, int hig)
	{
		weight = weigh;
		high = hig;
	}

	int get_weight() { return weight; }

	int get_high() { return high; }

	void print_vehicle()
	{
		cout << "RegisterNum" << "     " << "Vehicle" << "     " << "Color" << "     " << "Maker" << "     "
			<< "NumberOfWheels" << "     " << "weight" << "     " << "High \n\n";


		cout << "  " << registerNum << "          " << typeOfVehicle << "        " << color << "     " << maker
			<< "           " << numberOfWheels << "              " << weight << "           " << high << "\n";
		cout << "---------------------------------------------------------------------------------------------\n\n";
	};
};

