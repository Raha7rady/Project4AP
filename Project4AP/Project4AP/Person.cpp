#include "Person.h"

// Constructor
Person::Person(string name, string id, Address address)
    : name(name), id(id), address(address) {}

// Copy constructor
Person::Person(const Person& other)
    : name(other.name), id(other.id), address(other.address) {}

// Getters
string Person::getName() const { return name; }
string Person::getId() const { return id; }
Address Person::getAddress() const { return address; }

// Setters
void Person::setName(const string& name) { this->name = name; }
void Person::setId(const string& id) { this->id = id; }
void Person::setAddress(const Address& address) { this->address = address; }

// Overloading the << operator
ostream& operator<<(ostream& os, const Person& person) {
	os << "Name: " << person.name << ", ID: " << person.id << ", Address: " << person.address;
	return os;
}

// Overloading the >> operator
istream& operator>>(istream& is, Person& person) {
	is >> person.name >> person.id >> person.address;
	return is;
}

// Assignment operator
Person& Person::operator=(const Person& other) {
	if (this != &other) {
		name = other.name;
		id = other.id;
		address = other.address;
	}
	return *this;
}