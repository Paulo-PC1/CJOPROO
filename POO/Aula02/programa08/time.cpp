// POO/Aula2/programa08/time.cpp: Arquivo de implementação da classe Time
#include <iostream>
#include <iomanip>
#include <stdexcept> // Classe para relatório de exceções
#include "time.hpp" // inclusão da Interface(Classe) time.hpp

//Implementação dos métodos da classe Time

//Construtor
Time::Time() : _hour(0), _minute(0), _second(0) {}; // Inicializa a Hora com valores zerados (garante que obj seja inicializado em estado consistente)

//Método setter para configurar valor de Time, utilizando um formato de hora universal assegurando que dados e configura valores inválidos (Zero)
void Time::setTime(int hour, int minute, int second){ 

    // Verifica se argumentos são inválidos e os configura
    if ((hour >= 0 && hour < 24) && (minute >= 0 && minute < 60) && (second >= 0 && second < 60)) 
    {
        _hour = hour;
        _minute = minute;
        _second = second;
    }
    //Caso contrário, lança exceção de argumento inválido
    else
    {
        throw std::invalid_argument("hour, minute and/or second was out of range");
    }

};

//Método para mostrar a hora no fomato Uiniversal (HH:MM:SS)
void Time::printUniversal() const{

    std::cout  << std::setfill('0') << std::setw(2) << _hour << ":" << std::setw(2) << _minute << ":" << std::setw(2) << _second;

};

//Método para mostrar a hora no fomato Padrão (HH:MM:SS AM ou PM)
void Time::printStandard() const{

    std::cout << ((_hour == 0 || _hour == 12) ? 12 : _hour % 12 ) << ":" << std::setfill('0') << std::setw(2) <<  _minute << ":" << std::setw(2) << _second << (_hour < 12 ? " AM" : " PM");

};