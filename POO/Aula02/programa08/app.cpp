// POO/Aula2/programa08/app.cpp: Programa que utiliza a classe Time

#include <iostream>
#include <stdexcept> // Classe para exceções
#include "time.hpp"

int main(void)
{   

    std::cout << "\n >> Time\n\n";

    //Instancia valor
    Time t;

    std::cout << "The initial universal time is ";
    t.printUniversal(); // 00::00::00

    std::cout << "\nThe initial standard time is ";
    t.printStandard(); // 12::00::00 AM


    t.setTime(13, 27, 6);

    std::cout << "\nThe new universal time after setTime is ";
    t.printUniversal(); // 13::27::06

    std::cout << "\nThe new standard time after setTime is ";
    t.printStandard(); // 1::27::06 AM


    try{
        t.setTime(99, 99, 99);
    }
    catch(std::invalid_argument &e){
        
        std::cout << "\nException: " << e.what() << "\n";
    }

    std::cout << "\nAfter attempting invalid settings:\n";

    
    std::cout << "\nUiversal time: ";
    t.printUniversal(); // 13::27::06

    std::cout << "\nStandard time: ";
    t.printStandard(); // 1::27::06 AM

    std::cout << ">> Fim do Programa";

    return 0;
}
