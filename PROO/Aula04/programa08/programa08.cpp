/* 
----------------------------------
 programa08.cpp
 ----------------------------------
*/

#include <iostream>

using namespace std;

/*
//---------------------------------
 Funções do Programa
-----------------------------------
*/
void cantar(int opcao){

    cout << "* Voce escolheu a opcao" << opcao << ". Vamos cantar\n\n";

}

void dancar(int opcao){

    cout << "* Voce escolheu a opcao" << opcao << ". Vamos dancar\n\n";

}

void enrolar(int opcao){

    cout << "* Voce escolheu a opcao" << opcao << ". Vamos Enrolar\n\n";

}
/* 
----------------------------------
 Função Main(Principal)   
----------------------------------
*/
int main(void) {

    cout << "\nArray de Ponteiros para Funções\n\n";

    void (*funcoes[3])(int) = {
        cantar,
        dancar,
        enrolar
    };

    int opcao;

    cout << ">> Informe a opcao desejada (0, 1 ou 2): ";
    cin >> opcao;
    cout << endl;

    while ((opcao >= 0) && (opcao < 3))
    {
        (*funcoes[opcao])(opcao);

        cout << ">> Informe a opcao desejada (0, 1, 2, ou 3 para sair): ";
        cin >> opcao;
        cout << endl;
    }
    

    return 0;
}