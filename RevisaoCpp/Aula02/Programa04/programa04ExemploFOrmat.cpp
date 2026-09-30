/* 
----------------------------------
 programa04Professor.cpp

 Programa que mostra uso namespaces
 ----------------------------------
*/

#include <iostream>
#include <format>
#include <print>

/* 
----------------------------------
 Função Main(Principal)   
----------------------------------
*/
int main(void) {

    double a = 25.0;

    std::cout << std::format("Isso e um teste: {:>30.2f}\n", a);
    std::cout << "\n";
    //os dois funcionam igual std::format c++20, std::print/println c++23
    std::println("Isso e um teste: {:>30.2f}\n", a);
    
    //Finalização do Programa

    return 0;
}