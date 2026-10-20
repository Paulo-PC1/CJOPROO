// POO/Aula3/programa09/time.cpp: Arquivo de implementação da classe Time
#include <iostream>
#include <iomanip>
#include <stdexcept> // Classe para relatório de exceções
#include "time.hpp" // inclusão da Interface(Classe) time.hpp

// Implementação dos métodos da classe Time

// Construtor 
// Inicializa a Hora com valores zerados (garante que obj seja inicializado em estado consistente)
Time::Time(int hour, int minute, int second) 
{
    //Valida e configura a hora
    setTime(hour, minute, second);
}; 

// Setters
// Método setter para configurar valor de Time, utilizando um formato de hora universal assegurando que dados e configura valores inválidos (Zero)
void Time::setTime(int h, int m, int s){ 

    setHour(h); // configura a hora
    setMinute(m); // configura a minutos
    setSecond(s); // configura a segundos
   
}

// Define a hora
void Time::setHour(int h)
{
    // Se argumento válido configura horas
    if( (h >= 0) && (h < 24) )
    {
        hour = h;
    }
    // Caso contrário lança exceção de argumento inválido
    else
    {
        throw std::invalid_argument("hour must be 0-23!");
    }
} 

// Define os minutos
void Time::setMinute(int m) 
{
    // Se argumento válido configura minutos
    if( (m >= 0) && (m < 60 ) )
    {
        minute = m;
    }
    // Caso contrário lança exceção de argumento inválido
    else
    {
        throw std::invalid_argument("minute must be 0-59!");
    }
}
 // Define os segundos
void Time::setSecond(int s)
{
    // Se argumento válido configura segundos
    if( (s >= 0) && (s < 60) )
    {
        second = s;
    }
    // Caso contrário lança exceção de argumento inválido
    else
    {
        throw std::invalid_argument("seconds must be 0-59!");
    }
}

// Getters
// Retorna a hora
unsigned int Time::getHour() const
{
    return hour;
}

// Retorna os minutos
unsigned int Time::getMinute() const
{
    return minute;
}

// Retorna os segundos
unsigned int Time::getSecond() const
{
    return second;
}

//Método para mostrar a hora no fomato Uiniversal (HH:MM:SS)
void Time::printUniversal() const{

    std::cout << std::setfill('0') << std::setw(2) << getHour() 
              << ":" << std::setw(2) << getMinute() << ":" << std::setw(2) << getSecond();

};

//Método para mostrar a hora no fomato Padrão (HH:MM:SS AM ou PM)
void Time::printStandard() const{

    std::cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12 ) 
              << ":" << std::setfill('0') << std::setw(2) 
              <<  getMinute() << ":" << std::setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM");

};