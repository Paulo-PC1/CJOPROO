// Programa 04 sobre Orientação a Objetos
// Classes e Objetos Atributos(Membros de Dados), Getters e Setters, (Métodos com parâmetros), multiplos objetos e Construtores
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