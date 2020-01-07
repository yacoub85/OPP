#pragma once
#include"Vehicle.h"


class Car:public Vehicle
{
protected:
	string typeOfCar;
	int manufacturingYear;
public:
	//Car() {};
	void set_vehicle(string reg, string col, string make, int numOfWheels) {
		typeOfVehicle = "Car";
		registerNum = reg;
		color = col;
		maker = make;
		numberOfWheels = numOfWheels;
	}
	void set_extra_Feature(string ty, int year)
	{
		typeOfCar = ty;
		manufacturingYear = year;
	}

	string get_model() { return typeOfCar; }
	int get_manufacturingYear() { return manufacturingYear; }

	void print_vehicle()
	{
		cout << "RegisterNum" << "     " << "Vehicle" << "     " << "Color" << "     " << "Maker" << "     " << "NumberOfWheels" << "     "
			<< "CarType" << "     " << "ManufacturingYear \n\n";

		
		cout << "  " <<registerNum << "          " << typeOfVehicle << "        "
			<< color << "     " << maker << "           " << numberOfWheels << "              "
			<< typeOfCar << "           " << manufacturingYear
			<< "\n";
		cout << "-------------------------------------------------------------------------------------------------\n\n";
	};

};

