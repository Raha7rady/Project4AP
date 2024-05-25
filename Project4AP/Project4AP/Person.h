#pragma once

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
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

};

#endif // PERSON_H
