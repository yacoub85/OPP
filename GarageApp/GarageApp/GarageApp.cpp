#include <iostream>
#include<string>
#include<array>
#include<vector>
#include "Vehicle.h"
#include "Bicycle.h"
#include "Motorcycle.h"
#include "Car.h"
#include "Bus.h"
#include "Truck.h"
#include "Garage.h"

using namespace std;

//Handling input errors
int checkInput()
{
	int input;
	while (true)
	{
		cin >> input;
		if (cin.fail())
		{
			std::cout << "Invalid choice try again" << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
		else
		{
			break;
		}
	}

	return input;
}
//Return to the menu
void returnTomenu()
{
	cout << "\n\nPress Enter to back to the menu... " << endl;
	//pause displays a message and waits for the user to hit a key
	system("PAUSE");
	//Clearing the Screen
	system("CLS");

}




Vehicle* myVehicle;

void set_featuresOfVehicle(string* registerNum, string* color, string* maker, int* numberOfWheels)
{
	cout << "\n_Enter your vehicle information: \n";
	cout << "\t\t\t\tRegister number: ";   cin >> *registerNum;
	cout << "\t\t\t\tColor: ";   cin >> *color;
	cout << "\t\t\t\tMaker: ";   cin >> *maker;
	cout << "\t\t\t\tNumber of wheels: ";  *numberOfWheels = checkInput();
	return;
}




int Garage::vehicleCounter = 0;

int main()
{
	//string typeOfVehicle;
	string registerNum;
	string color;
	string maker;
	string typeOfCar;
	int numberOfWheels;
	int* speed = new int;
	int* year = new int;
	int* numOfPassnger = new int;
	int* line = new int;
	int* weight = new int;
	int* high = new int;
	
	cout << "\n\t\t\t\t\t\t***Welcome To Our Garage Service***\n\n";
	cout << "\tHow many places you want to get in your garage?";
	int places;
	places = checkInput();

	Garage * myGarage = new Garage();

	Bicycle* myBicycle;
	Motorcycle* myMotor;
	Car* myCar;
	Bus* myBus;
	Truck* myTruck;


	bool loop1 = true, loop2 = true, loop3 = true, loop4 = true, loop5 = true;
	while (loop1)
	{

		short int choice1, choice2, choice3,choice4,choice5;
		system("CLS");////Clearing the Screen
		cout << "\n *Choose: " << endl;
		cout << "\t[1] Manage your vehicle, Check In/Out" << endl;
		cout << "\t[2] Find a vehicle in the garage" << endl;
		cout << "\t[3] List Of Vehicles" << endl; 
		cout << "\t[4] Exit" << endl;

		choice1 = checkInput();
		system("CLS");////Clearing the Screen
		switch (choice1)
		{
		//Check In/Out
		case 1:
			do
			{
				cout << "\n\t\t\t\t\t\t[Check In/Out]\n\n";

				cout << "\t     *Choose:\n ";
				cout << "\t\t   [1] Check In" << endl;
				cout << "\t\t   [2] Check Out" << endl;
				cout << "\t\t   [3] Back to main menu" << endl;

				choice2 = checkInput();
				system("CLS");//Clearing the Screen
				switch (choice2)
				{
				//Check In
				case 1:
					if (myGarage->get_vehicleCounter()<places)
					{
						do
						{
							cout << "\n\t\t\t\t\t\t[Check In]\n\n";

							cout << "\t*Choose your vehicle typeOfCar:\n ";
							cout << "\t\t\t\t[1] Bicycle\n";
							cout << "\t\t\t\t[2] Motorcycle\n";
							cout << "\t\t\t\t[3] Car\n";
							cout << "\t\t\t\t[4] Bus\n";
							cout << "\t\t\t\t[5] Truck\n";
							cout << "\t\t\t\t[6] Cancel\n";
							choice5 = checkInput();
							system("CLS");//Clearing the Screen

							switch (choice5)
							{

								//Add Bicycle
							case 1:
								set_featuresOfVehicle(&registerNum, &color, &maker, &numberOfWheels);
								//Create new object
								myBicycle = new Bicycle();
								//Create a new Bicycle
								myBicycle->set_vehicle("NULL", color, maker, numberOfWheels);
								//Add the Bicycle
								myGarage->check_in(myBicycle);

								returnTomenu();
								loop5 = false;
								loop2 = false;
								break;

								//Add Motorcycle
							case 2:
								set_featuresOfVehicle(&registerNum, &color, &maker, &numberOfWheels);
								//set extra features
								cout << "\t\t\t\tSpeed: ";  *speed = checkInput();
								//Create new object
								myMotor = new Motorcycle;
								//Create a new motorcycle
								myMotor->set_vehicle(registerNum, color, maker, numberOfWheels);
								myMotor->set_extra_Feature(*speed);
								//Add the motorcycle
								myGarage->check_in(myMotor);

								returnTomenu();
								loop5 = false;
								loop2 = false;
								break;

								//Add Car
							case 3:
								//Create new object
								myCar = new Car;
								set_featuresOfVehicle(&registerNum, &color, &maker, &numberOfWheels);
								//set extra features
								cout << "\t\t\t\Typ : ";  cin >> typeOfCar;
								cout << "\t\t\t\Year: ";  *year = checkInput();
								//Create a new car
								myCar->set_vehicle(registerNum, color, maker, numberOfWheels);
								myCar->set_extra_Feature(typeOfCar, *year);
								//Add the car
								myGarage->check_in(myCar);

								returnTomenu();
								loop5 = false;
								loop2 = false;
								break;

								//Add Bus
							case 4:
								cout << "Enter your Bus information: \n";
								//Create new object
								myBus = new Bus;
								set_featuresOfVehicle(&registerNum, &color, &maker, &numberOfWheels);
								//set extra features
								cout << "\t\t\t\Line : ";  cin >> *line;
								cout << "\t\t\t\Number of passnger : ";  *numOfPassnger = checkInput();
								//Create a new bus
								myBus->set_vehicle(registerNum, color, maker, numberOfWheels);
								myBus->set_extra_Feature(*numOfPassnger, *line);

								//Add the bus
								myGarage->check_in(myBus);

								//Back to main menu
								returnTomenu();
								loop5 = false;
								loop2 = false;
								break;
								//Add Truck
							case 5:
								cout << "Enter your Truck information: \n";
								//Create new object
								myTruck = new Truck;
								set_featuresOfVehicle(&registerNum, &color, &maker, &numberOfWheels);
								//set extra features
								cout << "\t\t\t\Weight : ";  cin >> *weight;
								cout << "\t\t\t\High : ";  *high = checkInput();
								//Create a new bus
								myTruck->set_vehicle(registerNum, color, maker, numberOfWheels);
								myTruck->set_extra_Feature(*weight, *high);

								//Add the bus
								myGarage->check_in(myTruck);

								//Back to main menu
								returnTomenu();
								loop5 = false;
								loop2 = false;
								break;

								//Cancel
							case 6:
								loop5 = false;
								break;

							default:
								cout << "your choice is not ixest" << endl;
								returnTomenu();
								break;
							}
						} while (loop5);
						break;
					}

					if (myGarage->get_vehicleCounter() >= places)
					{
						cout << "\n\n\tSorry! The garage is full! You have to wait another vehicle to leave the garage to can check in.\n\n";
					}

					returnTomenu();
					break;

				//Check Out
				case 2:
					cout << "\n\t\t   Enter yours vehicle registration number:  "; cin >> registerNum;
					myGarage->check_out(registerNum);
					returnTomenu();
					break;

				//Back to main menu
				case 3:
					loop2 = false;
					break;

				default:
					cout << "your choice is not ixest" << endl;
					returnTomenu();
					break;
				}
			} while (loop2);
			break;

		//Find a vehicle
		case 2:
			do
			{
				cout << "\n\t\t\t\t\t\t[Find a vehicle]\n\n";

				cout << "\t\tChoose: " << endl;
				cout << "\t\t   [1] To find with a registration number\n";
				cout << "\t\t   [2] To find all with colour\n";
				cout << "\t\t   [3] To find all with a specified number of wheels\n";
				cout << "\t\t   [4] To find all with a number of passengers\n";
				cout << "\t\t   [5] To find all with a type of car\n";
				cout << "\t\t   [6] Back to main menu" << endl;

				choice3 = checkInput();
				system("CLS");//Clearing the Screen

				switch (choice3)
				{
				//Find and print out
					//by registration number
				case 1:
					cout << "\n\t\t   Enter yours vehicle registration number:  "; cin >> registerNum;
					cout << "\n\n";
					myGarage->findByAndPrintOut(registerNum,"registerNum");
					
					returnTomenu();
					break;

					//by colour
				case 2:
					cout << "\n\t\t   Enter a colour you want to find:  "; cin >> color;
					cout << "\n\n";
					myGarage->findByAndPrintOut(color, "color");
					
					returnTomenu();
					break;
					
					//by number of wheels
				case 3:
					cout << "\n\t\t   Enter a number of wheels you want to find:  "; cin >> numberOfWheels;
					cout << "\n\n";
					myGarage->findByAndPrintOut(to_string(numberOfWheels), "numberOfWheels");

					returnTomenu();
					break;
					//by number of passengers
				case 4:
					cout << "\n\t\t   Enter a number of number of passnger :  "; cin >> *numOfPassnger;
					cout << "\n\n";
					myGarage->findByAndPrintOut(to_string(*numOfPassnger), "numberOfPassengers");
					
					returnTomenu();
					break;
				    //Find by typ
				case 5:
					cout << "\n\t\t   Enter a type of car you want to find:  "; cin >> typeOfCar;
					cout << "\n\n";
					myGarage->findByAndPrintOut(typeOfCar, "typeOfCar");
					
					returnTomenu();
					break;

				//Back to main menu
				case 6:
					loop3 = false;
					break;

				default:
					cout << "your choice is not ixest" << endl;

					returnTomenu();
					break;
				}
			} while (loop3);
			break;

		//List Of Vehicles
		case 3:
			do
			{
				cout << "\n\t\t\t\t\t\t[List Of Vehicles]\n\n";

				cout << "\t    *Choose:\n";
				cout << "\t\t   [1] All vehicles\n";
				cout << "\t\t   [2] All vehicles by typeOfVehicle\n";
				cout << "\t\t   [3] Back to main menu\n";
				choice4 = checkInput();
				system("CLS");//Clearing the Screen

				switch (choice4)
				{
				//All vehicles
				case 1:
					cout << "\n\n -All vehicles in the garage: \n\n";
					myGarage->findByAndPrintOut("", "All");
					returnTomenu();
					break;
				//vehicles by type
				case 2:
					cout << "\n\n -All vehicles in the garage by type: \n\n";
					myGarage->findByAndPrintOut("Bicycle", "typeOfVehicle");
					myGarage->findByAndPrintOut("Motorcycle", "typeOfVehicle");
					myGarage->findByAndPrintOut("Car", "typeOfVehicle");
					myGarage->findByAndPrintOut("Bus", "typeOfVehicle");
					myGarage->findByAndPrintOut("Truck", "typeOfVehicle");
					//cout << "\n\t\t" << b << " Bicycle" << " in the garage\n\n";
					//cout << "\n\t\t" << m << " Motorcycle" << " in the garage\n\n";
					returnTomenu();
					break;

				//Back to main menu
				case 3:
					loop4 = false;
					break;

				default:
					cout << "your choice is not ixest" << endl;

					returnTomenu();
					break;
				}

			} while (loop4);		
			break;

		//Exit
		case 4:	
			loop1 = false;
			break;
		default:
			//If user enter a choice does not exist
			cout << "your choice is not ixest" << endl;
			returnTomenu();
			break;
		}
	}


	delete myGarage;




}
