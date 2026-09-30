/* 
----------------------------------
 programa10.cpp
 
 Alocação memória dinâmica
 ----------------------------------
*/

#include <iostream>

using namespace std;

/* 
----------------------------------
 Função Main(Principal)   
----------------------------------
*/
int main(void) {

    cout << "\nExemplo de Alocacao Dinamica de MOmoria\n\n";

    int *numeros = new int[5];

    for(int i = 0; i < 5; ++i){
        numeros[i] = i * 2;
    }

    cout << "* Numeros: [";

    for(int i = 0; i < 5; ++i){
        if(i < 4){
            cout << numeros[i] << ", ";
        }
        else{
            cout << numeros[i] << "]\n";
        }
    }

    delete[] numeros;

    cout << endl;

    return 0;
}