#pragma once
#include"Vehicle.h"



class Bicycle:public Vehicle
{
protected:
	string tyoOfBicycle;
public:
	Bicycle() {};

	void set_vehicle(string reg, string col, string make, int numOfWheels)
	{
		typeOfVehicle = "Bicycle";
		registerNum = reg;
		color = col;
		maker = make;
		numberOfWheels = numOfWheels;
	}

	void set_extra_Feature(string tyoOfBic)
	{
		tyoOfBicycle = tyoOfBic;
	}
	string get_tyoOfBicycle() { return tyoOfBicycle; }

	void  print_vehicle()
	{
		cout << "RegisterNum" << "     " << "Vehicle" << "     " << "Color" << "     " << "Maker" << "     " << "NumberOfWheels" << "   " << "TypeOfBicycle" << "\n\n";
		cout << "  " << registerNum << "       " << "   " << typeOfVehicle << "     " << color << "      " << maker << "            " << numberOfWheels << "            " << tyoOfBicycle << "\n";
		cout << "----------------------------------------------------------------------------\n\n";

	}
};

