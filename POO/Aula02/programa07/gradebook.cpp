// POO/Aula02/programa07/gradebook.cpp: Arquivo de implementação da classe GradeBook
#include "iostream"
#include "gradebook.hpp"

//Implementação dos métodos da classe GradeBook

//Construtor da Classe GradeBook, inicializa o atributo _courseName com a string fornecida como parametro       
GradeBook::GradeBook(std::string courseName) {

    //valida e armazena o nome do curso
    setCourseName(courseName);
}

//Método Setter, para configurara o nome do curso
void GradeBook::setCourseName(std::string courseName){

    //Verifica se o nome possui até 25 caracteres 
    if(courseName.size() <= 25){

        _courseName = courseName; // Armazena o nome do curso
    }
    //caso contrario
    else {

        _courseName = courseName.substr(0, 24); //Armazenar somente os primeiros 25 caracteres
 
        //Exibe mensagem de diagnóstico
        std::cerr << "Warning: name \""  << courseName << "\" exceeds maximum length (25). " << "Limiting courseName to first 35 characters. \n\n";
    }
}

//Método Getter, para obter o nome do curso
std::string GradeBook::getCourseName() const {

    return _courseName;
}

//Método para Exibir a  mensagem de boas-vindas
void GradeBook::displayMessage() const {

    std::cout << "Welcome to the Grade Book! for " << getCourseName() << "!\n\n";
}