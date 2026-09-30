/*
----------------------------------
 programa05_1.cpp

 Ordenar nomes compostos (array de strings)
 ----------------------------------
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Constante
#define TAM 10

//FUNCOES SEM PROTÓTIPO (BOTTOM UP)
//troca valor de 2 string
void trocar(string& a, string& b){

    string temp = a;
    a = b;
    b = temp;

}

//Encontra o pivô do quickSort 
int particao(string dados[], int inicio, int fim){

    string pivo = dados[fim];

    int i = inicio - 1;

    for(int j = inicio; j < fim; ++j){
        if(dados[j] < pivo){
            ++i;
            trocar(dados[i], dados[j]);
        }
    }

    trocar(dados[i + 1], dados[fim]);

    return i + 1;

}

// QuickSort
void quickSort(string dados[], int inicio, int fim){

    if(inicio < fim){
        int pivo = particao(dados, inicio, fim);

        quickSort(dados, inicio, pivo - 1);
        quickSort(dados, pivo + 1, fim);
    }

}

//Função Main(Principal)   
int main(void) {

    int i;

    string nomes[TAM];

    cout << "Exemplo QuickSort: \n";

    for(i = 0; i < TAM; ++i){
        cout << "Informe o nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    cout << "\n";

    //Antes ordenação
    i = 1;

    cout << "Nomes antes da ordenacao:\n\n";

    for(const auto& nome : nomes){
        cout << setw(2) << i << ". " << nome << "\n";
        ++i;
    }
    
    cout << "\n";

    //Ordenação quicksort
    quickSort(nomes, 0, TAM -1);


    // Após ordenação
    i = 1;

    cout << "Nomes depois da ordenacao:\n\n";

    for(const auto& nome : nomes){
        cout << setw(2) << i << ". " << nome << "\n";
        ++i;
    }
    
    cout << "\n";

    //Finalização do Programa

    return 0;
}