// Programa 05 sobre Orientação a Objetos
// Classes e Objetos Atributos(Membros de Dados), Getters e Setters, (Métodos com parâmetros), multiplos objetos e Construtores
//uso de arquivos de cabeçalho (reuzabilidade de código, uso de interface (.hpp e .cpp))
// POO/Aula02/programa06/app.cpp programa que demonstra uso da classe GradeBook
#include <iostream>
#include "gradebook.hpp" // inclusão arquivo .hpp


int main(void)
{
    std::cout << "\n>> Grade Book\n\n";

    //Instancia(Cria) 2 objetos do tipo GradeBook
    GradeBook gradebook1("CS101 Introduction to C++ Programming");
    GradeBook gradebook2("CS101 Data Structures in C++");

    //Variável para armazenar nome do curso
    std::string nameOfCourse;

    //Exibe o valor inicial do atributo _courseName para cada objeto
    std::cout << "* gradebook1 created for course: " << gradebook1.getCourseName() << "\n";
    std::cout << "* gradebook2 created for course: " << gradebook2.getCourseName() << "\n";

    std::cout << "\n";

    return 0;
}