// POO/Aula3/programa09/time.hpp: Arquivo de interface da classe Time
#pragma once

//Classe Time
class Time {

public:

    //Construtor padrão
    explicit Time(int hour = 0, int minute = 0, int second = 0); // Inicializa a classe 

    //Setter
    void setTime(int hour, int minute, int second); // Configura a hora, minuto e segundo
    void setHour(int h); // Define a hora
    void setMinute(int m); // Define os minutos
    void setSecond(int s); // Define os segundos

    //Getter
    unsigned int getHour() const; // Retorna a hora
    unsigned int getMinute() const; // Retorna os minutos
    unsigned int getSecond() const; // Retorna os segundos

    //Métodos Gerais
    void printUniversal() const; // Exibe hora em formato universal
    void printStandard() const; // Exibe hora em formato padrão


private:

    //Atributos
    unsigned int hour; // Atributo que armazena as horas 0 - 23
    unsigned int minute; // Atributo que armazena os minutos 0 - 59
    unsigned int second; // Atributo que armazena os segundos 0 - 59
};