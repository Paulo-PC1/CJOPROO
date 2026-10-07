//Progama 05 gradebook.hpp (cabeçalho)
// POO/Aula02/programa07/gradebook.hpp: arquivo de interface da classe GradeBook
#pragma once
#include <string>

class GradeBook {

public:

    //Criação do construtorcda classe
    explicit GradeBook(std::string courseName); // Construtor

    //Criação de Getter e Setter
    void setCourseName(std::string courseName); // Configura o nome do curso
    std::string getCourseName() const; // Obtém o nome do curso
    void displayMessage() const; // Exibe mensagens de boas-vindas

private:

    //Criação de atributos da classe
    std::string _courseName; //Atributo que armazena o nome do curso 
        
};
