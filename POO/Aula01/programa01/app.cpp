// Programa 01 sobre Orientação a Objetos
// Classes e Objetos (Métodos sem parâmetro)
#include <iostream>

//criação da classe em c++
class GradeBook {

    public:

        //Função(Método) para exibir mensagem ao usuário
        //Funções(Método) que não modifiquem nada boa prática colocar const
        void displayMessage() const {
            std::cout << "Welcome to the Grade Book!\n\n";
        }

};

int main(void)
{
    std::cout << "\n>> Grade Book\n\n";

    //Criação de Objeto em c++
    //Criação de objeto do tipo da GradeBook(classe) chamado myGradeBook
    GradeBook myGeadeBook;

    //Executa o método(função) da classe 
    myGeadeBook.displayMessage();

    return 0;
}