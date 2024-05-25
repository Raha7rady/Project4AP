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

bool Person:: validate(const string& id) {
    // Condition 1
    if (id.length() < 8 || id.length() > 10) {
        return false;
    }

    // Condition 2
    int firstTwoDigits = std::stoi(id.substr(0, 2));
    if (firstTwoDigits < 84 || firstTwoDigits > 99) {
        return false;
    }

    // Count of non-digit characters
    int nonDigitCount = 0;

    // Count of digits smaller than 4 or bigger than 6 after non-digit characters
    int digitCount = 0;

    bool nonDigitFlag = false;

    for (int i = 2; i < id.length(); ++i) {
        if (!isdigit(id[i])) {
            nonDigitCount++;
            nonDigitFlag = true;
        }
        else {
            if (nonDigitFlag) {
                int num = id[i] - '0';
                if (num >= 4 && num <= 6) {
                    return false;
                }
                digitCount++;
            }
        }
    }

    // Condition 3
    if (nonDigitCount < 1 || nonDigitCount > 3) {
        return false;
    }

    // Condition 4
    if (digitCount < 3 || digitCount > 5) {
        return false;
    }

    return true;
}