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

// Getters
string Address::getCountry() const { return country; }
string Address::getCity() const { return city; }
string Address::getStreet() const { return street; }

// Setters
void Address::setCountry(const string& country) { this->country = country; }
void Address::setCity(const string& city) { this->city = city; }
void Address::setStreet(const string& street) { this->street = street; }