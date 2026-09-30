/* 
----------------------------------
 programa04.cpp

 Programa que ...
 ----------------------------------
*/

// Programa que demonstre uso de funções estatísticas
// -PI
// -média
// -mediana
// -variância
// -desvio padrão

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

float resultado, n1, n2, n3, n4;
#define PI 3.14

//------------------------------------------------------------

//Simulação de pausa na execução do programa
void pausa() 
{
    char letra;

    cout << "\nTecle <C> + <Enter> para voltar ao menu: ";

    //Laço para receber entrada do usuário
    do
    {
        //Obtém a entrada do usuário
        letra = cin.get();

        //Convete para maiusculo
        letra = toupper(letra);

    } while (letra != 'C');
    
}

void calculoPI ()
{
    cout << "\nCalculo Circunferencia com uso de PI\n";
    cout << " ---------------------------------------";

    cout << "Entre o valor do Raio: ";
    cin >> n1;

    resultado = 2 * PI * n1;

    cout << "O resultado da Circunferencia do Circulo e " << resultado << endl;

    pausa();
}

void calculoMedia()
{
    cout << "\nCalculo Media\n";
    cout << " ----------------";

    resultado = (n1 + n2 + n3 + n4) / 4;
    cout << "O resultado da Media de 4 valores e " << resultado << endl;

    pausa();
}

void calculoMediana()
{
    int numeros;
    int contador = 0;
    vector<int> lista;

    do
    {
        
        cout << "\nEntre valores para calculo de Mediana <0 para encerar>: ";
        cin >> numeros;
        lista.push_back(numeros);
        if (numeros == 0){
            lista.pop_back();
        }

    } while (numeros != 0);
     
    for(size_t i = 0; i <lista.size(); ++i){
        contador++;
        
        int parImpar = contador % 2;
        if(parImpar != 0){
            
        }
    }
}   
/* 
----------------------------------
 Função Main(Principal)   
----------------------------------
*/
int main(void)
{
    //Declaração de variáveis
    int opcao{0}; // int opcao = 0;

    //Laço para escolha da operação desejada
    while (opcao != 5)
    {
        // formatação
        cout << setprecision(2);
        cout << setiosflags(ios::right);
        cout << setiosflags(ios::fixed);

        //Cabeçalho 

        cout << "\n";
        cout << "----------------------------------" << endl;
        cout << " Programa Calculadora Estatistica " << endl;
        cout << "           Menu Principal   " << endl;
        cout << "----------------------------------";
        cout << "\n";

        //Opções do menu
        cout << "[1] - CalculoPI\n";
        cout << "[2] - Medias\n";
        cout << "[3] - Mediana\n";
        cout << "[4] - Variancia\n";
        cout << "[5] - Desvio adrao\n";
        cout << "[6] - Encerrar o programa\n\n";   

        //Entrada do usuário
        cout << "=> Escolha uma opcao: ";
        cin >> opcao;        
        
        //Se usuário não quer encerrar programa
        if(opcao != 6)
        {
            //Verifica opção escolhida pelo usuário
            switch (opcao)
            {
                case 1:
                    calculoPI();
                    break;

                case 2:
                    calculoMedia();
                    break;

                case 3:
                    calculoMediana();
                    break;

                case 4:
                    //divisao();
                    break;
                
                case 5:
                    //divisao();
                    break;
            }   
        }
        //Caso contrario
        else
        {
            cout << "\nPrograma encerrado com sucesso!\n\n";
        }

    }

    //Finalização do Programa
    return 0;
}