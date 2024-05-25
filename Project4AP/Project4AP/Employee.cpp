#include "Employee.h"

// Constructor
Employee::Employee(const std::string& name, const std::string& id, const Address& address)
	: name(name), id(id), address(address), hourWork(0), salaryPerHour(0), workToDo(0), workDone(0) {
    // Validate ID in constructor
    if (!validate(id)) {
        std::cout << "id invalid" << std::endl;
        exit(1);
    }
}

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

bool Employee:: validate(const std::string& id) {
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
            if (id[2] != '*') {
                return false;
            }
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