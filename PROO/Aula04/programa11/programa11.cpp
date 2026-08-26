/* 
----------------------------------
 programa11.cpp
 ----------------------------------
*/

#include <iostream>
#include <cstring>


using namespace std;

/* 
----------------------------------
 Função Main(Principal)   
----------------------------------
*/
int main(void) {

   cout << "\nExemplo de uso de strtok() e alocacao dinamica";

    char texto[] = "Minha-frase-de-token";

    char separador[] = "-";

    int capacidade = 2;

    char **tokens = nullptr;

    tokens = new char*[capacidade];

    char *tokenPtr;

    int i, total;

    cout << "* Texto inicial: " << texto << "\n\n";
    
    tokenPtr = strtok(texto, separador);

    total = 0;

    while(tokenPtr != NULL){

        if(total >= capacidade){

            capacidade *= 2;

            char **temp = new char*[capacidade];

            for(i = 0; i < total; ++i){
                temp[i] = tokens[i];
            }

            delete[] tokens;

            tokens = temp;

        }

        tokens[total] = tokenPtr;

        total++;

        tokenPtr = strtok(NULL, separador);

    }

    cout << "*. Foram gerandos " << total << " tokens: \n\n";
    
    for(i = 0; i < total; ++i){
        cout << i + 1 << ". ->" << tokens[i] << "\n";
    }

    cout << endl;

    return 0;
}