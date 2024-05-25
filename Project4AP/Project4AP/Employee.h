#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "Address.h"

class Employee {
private:
	int hourWork;
	int salaryPerHour;
	int workToDo;
	int workDone;

public:
	std::string name;
	std::string id;
	Address address;

	Employee(const std::string& name, const std::string& id, const Address& address);
	Employee(const Employee& other);

};

#endif 


