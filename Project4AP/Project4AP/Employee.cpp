#include "Employee.h"

// Constructor
Employee::Employee(const std::string& name, const std::string& id, const Address& address)
	: name(name), id(id), address(address), hourWork(0), salaryPerHour(0), workToDo(0), workDone(0) {}

// Copy constructor
Employee::Employee(const Employee& other)
	: name(other.name), id(other.id), address(other.address), hourWork(other.hourWork), salaryPerHour(other.salaryPerHour),
	workToDo(other.workToDo), workDone(other.workDone) {}

// Setters
void Employee::setHourWork(int hours) {
	hourWork = hours;
}

void Employee::setSalaryPerHour(int salary) {
	salaryPerHour = salary;
}

void Employee::setWorkToDo(int work) {
	workToDo = work;
}

void Employee::setWorkDone(int work) {
	workDone = work;
}

// Getters
int Employee::getHourWork() const {
	return hourWork;
}

int Employee::getSalaryPerHour() const {
	return salaryPerHour;
}

int Employee::getWorkToDo() const {
	return workToDo;
}

int Employee::getWorkDone() const {
	return workDone;
}

//operators
std::ostream& operator<<(std::ostream& os, const Employee& employee) {
	os << "Name: " << employee.name << ", ID: " << employee.id << ", Address: " << employee.address << std::endl;
	os << "Hours Worked: " << employee.hourWork << ", Salary Per Hour: " << employee.salaryPerHour << std::endl;
	os << "Work To Do: " << employee.workToDo << ", Work Done: " << employee.workDone << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Employee& employee) {
	is >> employee.name >> employee.id >> employee.address >> employee.hourWork >> employee.salaryPerHour >> employee.workToDo >> employee.workDone;
	return is;
}

Employee& Employee::operator=(const Employee& other) {
	if (this != &other) {
		name = other.name;
		id = other.id;
		address = other.address;
		hourWork = other.hourWork;
		salaryPerHour = other.salaryPerHour;
		workToDo = other.workToDo;
		workDone = other.workDone;
	}
	return *this;
}
