#include <iostream>

using namespace std;

int main(void){

int idade = 25;
int *idadePtr = &idade;
int *nomePtr = nullptr;

    cout << "1. Valor de <idade>: " << idade << "\n";
    cout << "1. Endereco de <idade>: " << &idade << "\n\n";
    cout << "2. Valor de <idadePtr>: " << idadePtr << "\n";
    cout << "2. Valor apontado por <*idadePtr>: " << *idadePtr << "\n\n";

    return 0;

}
//sizeof() / sizeof(array[0])