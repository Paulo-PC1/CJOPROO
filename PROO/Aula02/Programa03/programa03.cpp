/* 
-------------------------------------------------------
 programa03.cpp

 Porgrama que usa função para calculadora simples
 -----------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

/*
----------------------
Varriáveis Globais
----------------------
*/

float resultado, n1, n2;

/*
----------------------
Protótipo de função
-----------------------
*/

void entrada();
void saida(string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

/* 
----------------------------
 Função Main(Principal)   
----------------------------
*/
int main(void) {

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
        cout << "----------------------" << endl;
        cout << " Programa Calculadora " << endl;
        cout << "     Menu Principal   " << endl;
        cout << "----------------------";
        cout << "\n";

        //Opções do menu
        cout << "[1] - Adicao\n";
        cout << "[2] - Subtracao\n";
        cout << "[3] - Multiplicacao\n";
        cout << "[4] - Divisao\n";
        cout << "[5] - Encerrar o programa\n\n";   

        //Entrada do usuário
        cout << "=> Escolha uma opcao: ";
        cin >> opcao;        
        
        //Se usuário não quer encerrar programa
        if(opcao != 5)
        {
            //Verifica opção escolhida pelo usuário
            switch (opcao)
            {
                //Adição
                case 1:
                    adicao();
                    break;

                //Subtração
                case 2:
                    subtracao();
                    break;

                //Adição
                case 3:
                    multiplicacao();
                    break;

                //Divisao
                case 4:
                    divisao();
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

/*
------------------------
Definição das funções 
------------------------
*/

// Realiza a entrada dos números que serão urilizados para a operação
void entrada() 
{
    cout << "\n* Informe o primeiro numero: "; cin >> n1;
    cout << "* Informe o segundo numero: "; cin >> n2;

}

//------------------------------------------------------------

//Exibe o resultado da operação
void saida(string operacao) 
{
    cout <<"\n=> O resultado da " << operacao << " entre " << n1 << " e " << n2 << " e " << resultado << "!\n"; 

    //simula pausa
    pausa();
}

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

//------------------------------------------------------------

//Realiza a operação de Adição
void adicao() 
{
    //Cabeçalho
    cout << "\n Rotina de Adicao \n";
    cout << " ---------------------";

    //Executa a função para obter os dados
    entrada();

    //Calcula a adição
    resultado = n1 + n2;

    //Executa a função de saída
    saida("adicao");

}

//------------------------------------------------------------

//Realiza a operação de Subtração
void subtracao() 
{
    //Cabeçalho
    cout << "\n Rotina de Subtracao \n";
    cout << " ------------------------";

    //Executa a função para obter os dados
    entrada();

    //Calcula a subtração
    resultado = n1 - n2;

    //Executa a função de saída
    saida("subtracao");

}

//------------------------------------------------------------

//Realiza a operação de Multiplicação
void multiplicacao() 
{
    //Cabeçalho
    cout << "\n Rotina de Multiplicacao \n";
    cout << " ---------------------------";

    //Executa a função para obter os dados
    entrada();

    //Calcula a multiplicação
    resultado = n1 * n2;

    //Executa a função de saída
    saida("multiplicacao");

}

//------------------------------------------------------------

//Realiza a operação de Divisão
void divisao() 
{
    
    //Cabeçalho
    cout << "\n Rotina de Divisão \n";
    cout << " ---------------------";

    //Executa a função para obter os dados
    entrada();

    //Verifica divisão por 0
    if(n2 == 0)
    {
        cout << "\nErro de divisao\n";

        //simula pausa
        pausa();
    }
    else
    {
        //Calcula a divisão
        resultado = n1 / n2;

        //Executa a função de saída
        saida("divisao");
    }

}

//------------------------------------------------------------