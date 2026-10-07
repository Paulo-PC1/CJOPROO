// POO/Aula02/programa06/gradebook.cpp: Arquivo de implementação da classe GradeBook
#include "iostream"
#include "gradebook.hpp"

//Implementação dos métodos da classe GradeBook

//Construtor da Classe GradeBook, inicializa o atributo _courseName com a string fornecida como parametro       
GradeBook::GradeBook(std::string courseName) : _courseName(courseName) {}

//Método Setter, para configurara o nome do curso
void GradeBook::setCourseName(std::string courseName){

    _courseName = courseName;
}

//Método Getter, para obter o nome do curso
std::string GradeBook::getCourseName() const {

    return _courseName;
}

//Método para Exibir a  mensagem de boas-vindas
void GradeBook::displayMessage() const {

    std::cout << "Welcome to the Grade Book! for " << getCourseName() << "!\n\n";
}