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

	// Getters
	string getCountry() const;
	string getCity() const;
	string getStreet() const;

	// Setters
	void setCountry(const string& country);
	void setCity(const string& city);
	void setStreet(const string& street);
};

#endif // ADDRESS_H

