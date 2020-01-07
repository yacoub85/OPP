#pragma once
#include"Vehicle.h"

class Bus:public Vehicle
{
protected:
	int numberOfPassengers;
	int line;

public:

	void set_vehicle(string reg, string col, string make, int numOfWheels) {
		typeOfVehicle = "Bus";
		registerNum = reg;
		color = col;
		maker = make;
		numberOfWheels = numOfWheels;
	}

	void set_extra_Feature(int numOfPass, int lin)
	{
		numberOfPassengers = numOfPass;
		line = lin;
	}

	int get_numberOfPassengers() { return numberOfPassengers; }

	int get_line() { return line; }

	void print_vehicle()
	{
		cout << "RegisterNum" << "     " << "Vehicle" << "     " << "Color" << "     " << "Maker" << "     " << "NumberOfWheels" << "     "
			<< "Line" << "     " << "NumOfPassengers \n\n";


		cout << "  " << registerNum << "          " << typeOfVehicle << "        "
			<< color << "     " << maker << "           " << numberOfWheels << "              "
			<< line << "           " << numberOfPassengers
			<< "\n";
		cout << "---------------------------------------------------------------------------------------------\n\n";
	};

};

