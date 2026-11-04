#include "date.hpp"
#include <iostream>
#include <array>
#include <stdexcept>


//Construtor e Destrutor
Date::Date(int month, int day, int year){

    if(month > 0  && month <= _monthsPerYear)
    {
        _month = month;
    }
    else
    {
        throw std::invalid_argument("month must be 1 - 12!!!!");
    }

    _year = year;

    _day = checkDay(day);

    std::cout << "Date object constructor for date: ";
    printDate();
    std::cout << "\n";
}

Date::~Date(){

    std::cout << "Date object destructor for date: ";
    printDate();
    std::cout << "\n";
}

//Getters Setters e Métodos
// formato exibido mm/dd/yyyy
void Date::printDate() const{

    std::cout << _month << "/" << _day << "/" << _year << ".";
    std::cout << "\n";
}


//Método para checar se data está no intervalo válido
unsigned int Date::checkDay(int day) const{
    
    static const std::array<int, _monthsPerYear + 1> daysPerMonth = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(day > 0 && day <= daysPerMonth[_month])
    {
        return day;
    }
    if (_month == 2 && day == 29 && (_year % 400 == 0  || (_year % 4 == 0 && _year % 100 != 0)))
    {
        return day;
    }
    
    throw std::invalid_argument("Invalid day for current month and year!");
}