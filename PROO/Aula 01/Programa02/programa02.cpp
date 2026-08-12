/* 
----------------------------------
 programa 02.cpp

 Programa que calcula horas trabalhadas
 ----------------------------------
*/
#include <iostream>
#include <iomanip>

using namespace std;

/* 
----------------------------------
 Função Main(Principal)   
----------------------------------
*/
int main(void)
{
    // Declaração de variáveis
    float ht, vh, pd, td, sb, sl;

    // Entrrada de dados

    cout << "\nCalculo de Horas Trabalhadas\n\n";

    cout << "Informe a quantidade de horas trabalhadas:";
    cin >> ht;

    cout << "Informe o valor de horas de trabalho:";
    cin >> vh;

    cout << "Informe o valor do percentual de desconto:";
    cin >> pd;

    // Realização dos cálculos

    sb = ht * vh;
    td = (pd / 100) * sb;
    sl = sb - td;

    // Formatação dos resultados

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios:: fixed);

    // Apresentação do resultado

    cout << "\n";
    cout << "Salario Bruto....: " << setw(8) << sb << endl; 
    cout << "Desconto.........: " << setw(8) << pd << endl; 
    cout << "Salario Liquido..: " << setw(8) << sl << endl << endl;

    //Finalização do Programa

    return 0;
}
