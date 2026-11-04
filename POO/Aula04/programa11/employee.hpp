#pragma once

#include <string>
#include "date.hpp"

class Employee{

public:

    Employee(const std::string &firstName, const std::string &lastName, const Date &birthDate, const Date &hireDate);

    ~Employee();

    void printInfo() const;

private:

    std::string _firstName;
    std::string _lastName;
    const Date _birthDate; // Composição
    const Date _hireDate;

};