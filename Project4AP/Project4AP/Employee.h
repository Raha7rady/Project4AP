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

	void setHourWork(int hours);
	void setSalaryPerHour(int salary);
	void setWorkToDo(int work);
	void setWorkDone(int work);

	int getHourWork() const;
	int getSalaryPerHour() const;
	int getWorkToDo() const;
	int getWorkDone() const;


};

#endif 


