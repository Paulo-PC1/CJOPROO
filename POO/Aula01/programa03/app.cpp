// Programa 03 sobre Orientação a Objetos
// Classes e Objetos Atributos(Membros de Dados), Getters e Setters e (Métodos com parâmetros)
#include <iostream>
#include <string>

//criação da classe em c++
class GradeBook {

    public:

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

int main(void)
{
    std::cout << "\n>> Grade Book\n\n";

    //Variável para armazenar nome do curso
    std::string nameOfCourse;

    //Criação de Objeto em c++
    //Criação de objeto do tipo da GradeBook(classe) chamado myGradeBook
    GradeBook myGeadeBook;

    //Exibe o valor inicial do atributo _courseName
    std::cout << "* Initial course name is: " << myGeadeBook.getCourseName() << "\n";

    //Entrada do nome do curso
    std::cout << "* Please enter the course name: ";
    std::getline(std::cin, nameOfCourse);

    //Define nome do curso
    myGeadeBook.setCourseName(nameOfCourse);

    std::cout << "\n";
    
    //Executa o método(função) displayMessage da classe com o novo nome do curso(via setter e getter)
    myGeadeBook.displayMessage();

    return 0;
}