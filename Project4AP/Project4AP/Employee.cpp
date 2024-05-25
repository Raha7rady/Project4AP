#include "Employee.h"

Employee::Employee(const std::string& name, const std::string& id, const Address& address)
	: name(name), id(id), address(address), hourWork(0), salaryPerHour(0), workToDo(0), workDone(0) {}

Employee::Employee(const Employee& other)
	: name(other.name), id(other.id), address(other.address), hourWork(other.hourWork), salaryPerHour(other.salaryPerHour),
	workToDo(other.workToDo), workDone(other.workDone) {}