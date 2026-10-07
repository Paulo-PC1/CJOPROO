// POO/Aula2/programa08/time.hpp: Arquivo de interface da classe Time
#pragma once

//Classe Time
class Time {

public:

    //Construtor
    Time(); // Inicializa a classe 

    //Getter Setter e métodos
    void setTime(int hour, int minute, int second); // Configura a hora, minuto e segundo
    void printUniversal() const; // Exibe hora em formato universal
    void printStandard() const; // Exibe hora em formato padrão


private:

    //Atributos
    unsigned int _hour; // Atributo que armazena as horas 0 - 23
    unsigned int _minute; // Atributo que armazena os minutos 0 - 59
    unsigned int _second; // Atributo que armazena os segundos 0 - 59
};