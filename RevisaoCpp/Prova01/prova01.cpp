#include <iostream>
#include <vector>
#include <ciso646>
#include <print>

using namespace std;

// 1 = [0] [0] , 5 = [1] [4], 15 = [3] [4]; terreno 5 5

int main(void) 
{
    int largura, altura;
    int i, j, k;
    int tomatePlantado = 0, armadilhasInstaladas = 0;
    vector<int> posicoes(5);

    cout << "* Tomates Magicos\n";

    cout << "- Professor Avelino, informe a altura e largura do seu terreno. ";
    cout << "- Altura: ";
    cin >> altura;
    cin.ignore(80, '\n');

    cout << "- Largura: ";
    cin >> largura;
    cin.ignore(80, '\n');

    vector<vector<char>> terreno(altura, vector<char>(largura));

    cout << "\n\n";
    cout << "- Informe as 5 posicoes onde deseja plantar cada pe de tomate: ";
    for ( i = 0; i < 5; i++)
    {
        cin >> posicoes[i];
    }

    cout << "\n";

    int tamanho = terreno.size();
    
    for( i = 0; i < altura; ++i){
        for( j = 0; j < largura; ++j){
            for( k = 0; k < 5; ++k){
                int valorA = posicoes[k] / tamanho;
                int valorB = posicoes[k] % tamanho;
                if((valorA == 0) and (valorB == 1)){
                    terreno[0][0] = 'T';
                }
                if((i == valorA) and (j == valorB) and (valorA != 0) and (valorB != 1)){
                    terreno[i][j] = 'T';
                    tomatePlantado++;
                }
            }
        }
    }

    for( i = 0; i < altura; ++i){
        for( j = 0; j < largura; ++j){
                if((terreno[i][j] != 'T') and (terreno[i][j] != ' ')){
                    terreno[i][j] = '#';
                    armadilhasInstaladas++;
            }
        }
    }

    
    cout << "- Voce conseguiu plantar " << tomatePlantado << " tomates com sucesso!\n\n";

    for( i = 0; i < altura; ++i){
        for( j = 0; j < largura; ++j){
            print("{}", terreno[i][j]);
        }
        cout << "\n";
    }

    cout << "- Total de armadilhas instaladas : " << armadilhasInstaladas << "\n\n";

    return 0;
}