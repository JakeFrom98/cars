#include <iostream>
#include <string>
#include "cars.h"

using namespace std;
void createCars();

void main() {
	createCars();
	cout << "Return from createCars().\n";
	system("pause");
}

void createCars() {
	Cars myCar;
	myCar.carMake = "Dodge";
	myCar.carModel = "Charger";
	myCar.setCarYear(2010);
	cout << "I have a " << myCar.getCarYear() << ", "
		<< myCar.carMake << " " << myCar.carModel << "." << endl;
	system("pause");

	Cars *yourCar = new Cars();
	yourCar->carMake = "Toyota";
	yourCar->carModel = "Camry";
	yourCar->setCarYear(2013);
	cout << "You have a " << yourCar->getCarYear() << ", "
		<< yourCar->carMake << " " << yourCar->carModel << "." << endl;
	system("pause");
}