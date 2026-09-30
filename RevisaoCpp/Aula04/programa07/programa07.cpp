/* 
----------------------------------
 programa07.cpp
 ----------------------------------
*/

#include <iostream>
#include <string>

using namespace std;
/*
//---------------------------------
 Funções do Programa
-----------------------------------
*/
void imprime1(int numeros[], size_t tamanho, string nome)
{
    cout << "Versao Array\n";
    cout << "1. " << nome << ": [";

    for(int i = 0; i < tamanho; ++i){
        if(i < tamanho - 1){
            cout << numeros[i] << ", ";
        }
        else{
            cout << numeros[i] << "]\n";
        }
    }
}

void imprime2(int *numeros, size_t tamanho, string nome)
{
    cout << "Versao Ponteiro\n";
    cout << "1. " << nome << ": [";

    for(int i = 0; i < tamanho; ++i){
        if(i < tamanho - 1){
            cout << *(numeros + i) << ", ";
        }
        else{
            cout << *(numeros + i) << "]\n";
        }
    }
}

/* 
----------------------------------
 Função Main(Principal)   
----------------------------------
*/
int main(void) {

    cout << "\nRelacionamento entre Arrays e Ponteiros\n\n";

    int numeros1[] = {1, 2, 3, 4, 5};
    int numeros2[] = {6, 7, 8, 9, 10};
    int numeros3[] = {11, 12, 13, 14, 15};

    size_t tamanho1 = sizeof(numeros1) / sizeof(numeros1[0]);
    size_t tamanho2 = sizeof(numeros2) / sizeof(numeros2[0]);
    size_t tamanho3 = sizeof(numeros3) / sizeof(numeros3[0]);

    imprime1(numeros1, tamanho1, "<numeros1>");
    imprime2(numeros2, tamanho2, "<numeros2>");
    
    int *ptr3 = numeros3;

    cout << "Versao ponteiro2 (subscrito array)\n";
    cout << "3. <*ptr3>...: [";

    for(int i = 0; i < tamanho3; ++i){
        if(i < tamanho3 - 1){
            cout << ptr3[i] << ", ";
        }
        else{
            cout << ptr3[i] << "]\n";
        }
    }

    return 0;
}