#include <iostream>

using namespace std;

//agrc -> Argument Count = quantidade de argumentos 1° sempre nome do programa
//argv -> Argument Vector = array de ponteiros do tipo char [0] caminho restante os arquivos(argumentos) 

int main(int argc, char* argv[])
{
    cout << "Exemplo de Argumentos da Funcao Principal\n\n";

    for (int i = 0; i < argc; ++i){
        cout << "Argumento " << i << ": " << argv[i] << "\n";
    }

    return 0;
}