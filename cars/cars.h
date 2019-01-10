#pragma once

#ifndef CARS_H
#define CARS_H

#include <iostream>
#include <string>
using namespace std;

class Cars {
public:
	Cars();  // default constructor
	~Cars();  // destructor

	string carMake;
	string carModel;

	void setCarYear(int year);
	int getCarYear();
private:
	int carYear;
};

#endif