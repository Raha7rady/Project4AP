#include "Person.h"

// Constructor
Person::Person(string name, string id, Address address)
    : name(name), id(id), address(address) {}

// Copy constructor
Person::Person(const Person& other)
    : name(other.name), id(other.id), address(other.address) {}
