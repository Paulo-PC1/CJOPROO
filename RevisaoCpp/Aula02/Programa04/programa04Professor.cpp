/* 
----------------------------------
 programa04Prof.cpp

 Uso namespaces
 ----------------------------------
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>

//Declaração de namespaces

namespace estatistico
{   
    //Variaveis que armazena os valores
    double PI = 3.141516;

    //calculo média
    double media(const std::vector<double> &dados)
    {
        //Var armazena soma valor do vector
        double soma{0};

        //Calcula soma dos valores do vetor
        for (auto valor : dados)
        {
            soma += valor;
        }
        
        //Retorna a média
        return soma / dados.size();
    }

    //calculo médiana
    double mediana(std::vector<double> dados)
    {
        //Ordena valores do vetor
        std::sort(dados.begin(), dados.end());

        //Calclo tamanho vector
        size_t tamanho = dados.size();

        //Retorna valor da Mediana
        if(tamanho % 2 == 0)
        {
            return (dados[tamanho / 2 - 1] + dados[tamanho / 2]) / 2;
        }
        else
        {
            return dados[tamanho / 2];
        }
    }

    //calculo variancia
    double variancia(const std::vector<double> &dados)
    {
        //Calcula Média valores vector
        double m = media(dados);

        //Var armazena soma valor do vector
        double soma{0};

        //Calcula soma dos quadrados da diferença entre o valor e sua média
        for (auto valor : dados)
        {
            soma += ( (valor - m) * (valor - m) );
        }
        
        //Retorna o valor da variancia
        return soma / dados.size();
    }

    //calculo Desvio Padrão
    double desvioPadrao(const std::vector<double> &dados)
    {    
        //Retorna o valor do descio padrao de dados
        return std::sqrt(variancia(dados));
    }
}

/* 
----------------------------------
 Função Main(Principal)   
----------------------------------
*/
int main(void) {

    //Define o vector com dados
    std::vector<double> dados = {2, 3, 3, 4, 5, 6, 7, 8, 9, 10};

    //Cabeçalho
    std::cout << "\nExemplo de uso de namespaces\n\n";

    //Formatação
    std::cout << std::setprecision(2) << std:: setiosflags(std::ios::fixed);

    //Uso de namespace para calcular resultado
    std::cout << "Valor de PI..: " << estatistico::PI << "\n";
    std::cout << "Media........: " << estatistico::media(dados) << "\n";
    std::cout << "Mediana......: " << estatistico::mediana(dados) << "\n";
    std::cout << "Variancia....: " << estatistico::variancia(dados) << "\n";
    std::cout << "Desvio Padrao: " << estatistico::desvioPadrao(dados) << "\n\n";

    //Finalização do Programa

    return 0;
}