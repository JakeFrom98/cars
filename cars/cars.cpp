#include "cars.h"

using namespace std;

Cars::Cars() {
	cout << "Construct a car.\n";
}
Cars::~Cars() {
	cout << "Destruct a car.\n";
	// cout << "Destruct a car - " << this->carMake << endl;
}

int Cars::getCarYear() {
	return carYear;
}
void Cars::setCarYear(int year) {
	carYear = year;
}