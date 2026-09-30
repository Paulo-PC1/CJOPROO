//Progama 05 gradebook.hpp (cabeçalho)
//#pragma once
#include <iostream>
#include <string>

//criação da classe em c++
class GradeBook {

    public:
    
        //Construtor, inicializa atributo com valor da string fornecida como argumento
        //obriga a inicializar pelo parametro 
        explicit GradeBook(std::string courseName) : _courseName(courseName) {}

        //Criação de Getter e Setter
        void setCourseName(std::string courseName){
            _courseName = courseName;
        }

        std::string getCourseName() const {
            return _courseName;
        }

        //Função(Método) para exibir mensagem ao usuário
        //Funções(Método) que não modifiquem nada boa prática colocar const
        void displayMessage() const {
            std::cout << "Welcome to the Grade Book! for " << getCourseName() << "!\n\n";
        }

    private:

        //Atributo que armazena o nome do curso 
        std::string _courseName;
        
};
