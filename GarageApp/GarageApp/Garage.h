#pragma once
#include<vector>
#include"Vehicle.h"
#include "Bicycle.h"
#include "Motorcycle.h"
#include "Car.h"
#include "Bus.h"
#include "Truck.h"
#include <string>

using namespace std;

class Garage
{
protected:
	static int vehicleCounter;
public:
	Garage() { vehicleCounter = 0; };


	vector<Vehicle*> myGarage;

	////Check in
	void check_in(Vehicle* myVehicle)
	{
		myGarage.push_back(myVehicle);
		vehicleCounter++;
		cout << "\n\t\t\t\t\t You're checked in successfully *_* \n";
	}

	//Check out (Delete an object and its element)
	void check_out(string str)
	{
		int x = -1;
		x = findByAndPrintOut(str, "registerNum");
		if (x != -1)
		{
			delete myGarage[x];
			myGarage.erase(remove(myGarage.begin(), myGarage.end(), myGarage[x]), myGarage.end());

			vehicleCounter--;
			cout << "\n\t\t\t\t\t You're checked out successfully! \n";

		}

	}

	//Search function
	Vehicle* myVehicle;
	int findByAndPrintOut(string str, string findBy)
	{
		int counter = 0;

		//break the searching if vector is empty
		if (myGarage.size() == 0) { return -1; }

		for (size_t i = 0; i < myGarage.size(); i++)
		{
			//find by register number
			if (findBy == "registerNum")
			{
				for (size_t j = i; j < myGarage.size(); j++)
				{
					if (str == myGarage[j]->get_registerNum())
					{
						myVehicle = myGarage[j];
						myVehicle->print_vehicle();
						return j;
						i = j;
						break;
					}
					if (i == myGarage.size() - 1)
					{
						cout << "\n\n\t\t\t\t\t\tCan't Find!\n";
						return i = -1;
						i = j;
						break;
					}
				}
			}

			//find by color
			if (findBy == "color")
			{
				if (str == myGarage[i]->get_color())
				{
					myVehicle = myGarage[i];
					myVehicle->print_vehicle();
				}
			}

			//find by number of wheels
			if (findBy == "numberOfWheels")
			{
				if (str == to_string(myGarage[i]->get_numberOfWheels()))
				{
					myVehicle = myGarage[i];
					myVehicle->print_vehicle();
				}
			}

			//find by number of passengers
			if (findBy == "numberOfPassengers")
			{
				if (str == to_string(myGarage[i]->get_numberOfPassengers()))
				{
					myVehicle = myGarage[i];
					myVehicle->print_vehicle();
				}
			}

			//find by typ of car
			if (findBy == "typeOfCar")
			{
				if (str == myGarage[i]->get_model())
				{
					myVehicle = myGarage[i];
					myVehicle->print_vehicle();
				}

			}

			//Get all vehicle
			if (findBy == "All")
			{
				myVehicle = myGarage[i];
				myVehicle->print_vehicle();
			}

			//find by type of vehicle
			if (findBy == "typeOfVehicle")
			{
				if (str == myGarage[i]->get_TypeOfVehicle())
				{
					myVehicle = myGarage[i];
					myVehicle->print_vehicle();
					counter++;
				}
				if (i == myGarage.size() - 1 && counter != 0)
				{
					//return counter;
					cout << "\n\t\t\t[" << counter << " " << str << " in the garage]\n";
					cout << "\t\t\t----------------------\n\n";

				}

			}

		}
	}

	int get_vehicleCounter() { return vehicleCounter; }

	

	~Garage() {};
};

