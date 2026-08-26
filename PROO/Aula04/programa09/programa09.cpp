/* 
----------------------------------
 programa09.cpp
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

    cout << "Exemplo de uso funcao strcmp()\n\n";

    const char *nomes[] = {
        "Paulo",
        "Paola",
        "Natalia",
        "Denis",
        "Selma",
        "Hugo"
    };

    size_t total = sizeof(nomes) / sizeof(nomes[0]);

    const char *temp;

    int i, j;

    cout << ">> Total de nomes: " << total << "\n\n";

    cout << "* Antes da ordenacao: \n\n";
    
    for (i = 0; i < total; ++i){
        
        cout << i + 1 << ". " << nomes[i] << "\n";
    }
    

    for(i = 0; i < total - 1; ++i){
        for(j = i + 1; j < total; ++j){
            if( strcmp(nomes[i], nomes[j]) > 0){
                temp = nomes[i];
                nomes[i] = nomes[j];
                nomes[j] = temp;

            }
        }
    }

    cout << "\n* Depois da ordenacao: \n\n";
    
    for (i = 0; i < total; ++i){
        
        cout << i + 1 << ". " << nomes[i] << "\n";
    }

    cout << endl;

    return 0;
}