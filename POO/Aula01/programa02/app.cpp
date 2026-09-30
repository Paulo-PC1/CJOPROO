// Programa 02 sobre Orientação a Objetos
// Classes e Objetos (Métodos com parâmetros)
#include <iostream>
#include <string>

//criação da classe em c++
class GradeBook {

    public:

        //Função(Método) para exibir mensagem ao usuário
        //Funções(Método) que não modifiquem nada boa prática colocar const
        void displayMessage(std::string courseName) const {
            std::cout << "Welcome to the Grade Book! for " << courseName << "!\n\n";
        }

};

int main(void)
{
    std::cout << "\n>> Grade Book\n\n";

    //Variável para armazenar nome do curso
    std::string nameOfCourse;

    //Criação de Objeto em c++
    //Criação de objeto do tipo da GradeBook(classe) chamado myGradeBook
    GradeBook myGeadeBook;

    //Entrada do nome do curso
    std::cout << "* Please enter the course name: ";
    std::getline(std::cin, nameOfCourse);
    std::cout << "\n";

    //Executa o método(função) displayMessage da classe 
    //passando a variável nameOfCourse como argumento(parâmetro)
    myGeadeBook.displayMessage(nameOfCourse);

    return 0;
}