#pragma once

class Date {

public:

    //Construtor e Destrutor
    explicit Date(int month = 1, int day = 1, int year = 1900);

    ~Date();

    //Getters Setters e Métodos
    void printDate() const; // formato exibido mm/dd/yyyy

    // Constante (static) para representar número de meses do ano
    static const unsigned int _monthsPerYear = 12;

private:

    unsigned int _month; // 1 - 12
    unsigned int _day; // 1 - 31
    unsigned int _year;

    //Método para checar se data está no intervalo válido
    unsigned int checkDay(int day) const;
};