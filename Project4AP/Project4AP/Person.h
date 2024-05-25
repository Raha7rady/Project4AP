#pragma once

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <cctype>
#include "address.h"

using namespace std;

class Person {
private:
	string name;
	string id;
	Address address;

public:
	// Constructor
	Person(string name, string id, Address address);

	// Copy constructor
	Person(const Person& other);

	// Getters
	string getName() const;
	string getId() const;
	Address getAddress() const;

	// Setters
	void setName(const string& name);
	void setId(const string& id);
	void setAddress(const Address& address);

	// Overloading the << operator
	friend ostream& operator<<(ostream& os, const Person& person);

	// Overloading the >> operator
	friend istream& operator>>(istream& is, Person& person);

	// Assignment operator
	Person& operator=(const Person& other);

	// Validate ID
	bool validate(const string& id);

};

#endif // PERSON_H
