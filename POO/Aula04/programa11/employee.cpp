#include "employee.hpp"
#include <iostream>

Employee::Employee(const std::string &firstName, const std::string &lastName, 
    const Date &birthDate, const Date &hireDate) : _firstName(firstName), _lastName(lastName),
    _birthDate(birthDate), _hireDate(hireDate) {

    std::cout << "Employee object constructor: " << firstName << " " << lastName << "\n";
    }

Employee::~Employee(){

    std::cout << "Employee object desstructor: " << _firstName << " " << _lastName << "\n";
}

void Employee::printInfo() const{

    std::cout << "* Employee's name: " << _lastName << ", " << _firstName << "\n";

    std::cout << " - Birthday: ";
    _birthDate.printDate();
    std::cout << "\n";

    std::cout << " - Hired: ";
    _hireDate.printDate();
    std::cout << "\n";
}