#pragma once
#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
#include <string>

using namespace std;

class Address {
private:
	string country;
	string city;
	string street;
public:
	// Constructor
	Address(string country, string city, string street);

	// Overloading the << operator
	friend ostream& operator<<(ostream& os, const Address& address);

	// Overloading the >> operator
	friend istream& operator>>(istream& is, Address& address);
};

#endif // ADDRESS_H

