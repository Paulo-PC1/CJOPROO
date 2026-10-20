// POO/Aula3/programa09/app.cpp: Programa que utiliza a classe Time

#include <iostream>
#include <stdexcept> // Classe para exceções
#include "time.hpp"

int main(void)
{   

    std::cout << "\n >> Time\n\n";

    //Instancia os objetos
    Time t1;
    Time t2(2);
    Time t3(21, 34);
    Time t4(12, 25, 42);

    std::cout << "Constructed with:\n\n";

    //Object t1
    std::cout << "* t1: all arguments defaulted\n  ";
    t1.printUniversal(); // 00::00::00

    std::cout << "\n  ";
    t1.printStandard(); // 12::00::00 AM

    std::cout << "\n\n";

    //Object t2
    std::cout << "* t2: hour specified, minute and second defaulted\n  ";
    t2.printUniversal(); // 02::00::00

    std::cout << "\n  ";
    t2.printStandard(); // 02::00::00 AM

    std::cout << "\n\n";

    //Object t3
    std::cout << "* t3: hour and minute specified, second defaulted\n  ";
    t3.printUniversal(); // 21::34::00

    std::cout << "\n  ";
    t3.printStandard(); // 9::34::00 PM

    std::cout << "\n\n";

    //Object t4
    std::cout << "* t4: hour, minute and second specified\n  ";
    t4.printUniversal(); // 12::25::42

    std::cout << "\n  ";
    t4.printStandard(); // 12::25::42 PM

    std::cout << "\n\n";

    try
    {
        Time t5(27, 74, 99);
    }
    catch(std::invalid_argument &e)
    {
        std::cerr << "* Exeption while initializing t5: "<< e.what() << "\n\n";
    }
    

    std::cout << ">> Fim do Programa";

    return 0;
}
