/*
----------------------------------
 programa05_1.cpp

 Ordenar nomes compostos (array de strings)
 ----------------------------------
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

#define TAM 10

void bubbleSort(vector<string>& nomes){
    int tamanho = TAM;
    for(int i = 0; i < tamanho - 1; ++i){
         for(int j = 0; j < tamanho - i - 1; ++j){
            if(nomes[i] > nomes[j + 1]){
                swap(nomes[j], nomes[j + 1]);
            }
        }
    }
}
//Função Main(Principal)   
int main(void) {

    int i;

    vector<string> nomes(TAM);
    
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
    bubbleSort(nomes);


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