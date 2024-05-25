#include "Address.h"

// Constructor
Address::Address(string country, string city, string street)
	: country(country), city(city), street(street) {}


// Overloading the << operator
ostream& operator<<(ostream& os, const Address& address) {
	os << "Country: " << address.country << ", City: " << address.city << ", Street: " << address.street;
	return os;
}

// Overloading the >> operator
istream& operator>>(istream& is, Address& address) {
	is >> address.country >> address.city >> address.street;
	return is;
}