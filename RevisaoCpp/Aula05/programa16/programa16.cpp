//Demostra uso de argumentos na função main

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

//agrc -> Argument Count = quantidade de argumentos 1° sempre nome do programa
//argv -> Argument Vector = array de ponteiros do tipo char [0] caminho restante os arquivos(argumentos) 

int main(int argc, char* argv[])
{
    cout << "Exemplo de Argumentos da Funcao Principal\n\n";

    if (argc != 4){
        cerr << "Uso: " << argv[0] << " somar/subtrair num1 num2" << "\n\n";
        return 1;
    }

    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);

    cout << "Exemplo de Argumentos da Funcao Principal\n\n";

    if (argc != 4){
        cerr << "Uso: " << argv[0] << " somar/subtrair num1 num2" << "\n\n";
        return 1;
    }

    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    if (!strcmp(operacao, "somar")){
        cout << "Soma: " << num1 + num2 << "\n"; 
    }
    else if (!strcmp(operacao, "subtrair")){
        cout << "Subtracao: " << num1 - num2 << "\n";
    }
    else{
        cout << "Operacao Invalida!!\n";
    }

    cout << "\n";

    return 0;
}