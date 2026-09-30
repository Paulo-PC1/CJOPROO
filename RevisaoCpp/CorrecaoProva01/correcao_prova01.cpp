// Correção Prova 01 Tomate Avelino
#include <iostream>
#include <vector>
//#include <string>

using namespace std;

int main(void)
{
    cout << "\n* Tomates Magicos\n\n";

    int largura, altura;
    int totalTomates = 5;
    int totalTomatesPerdidos = 0;
    int totalArmadilhas = 0;

    vector<int> tomates(totalTomates);

    int posicao;

    int i, j, linha, coluna; 

    cout << "- Professor Avelino, informe a altura e largura do seu terreno. ";
    cin >> altura >> largura;

    vector<vector<char>> terreno(altura, vector<char>(largura, '.'));

    cout << "- Informe as 5 posicoes onde deseja plantar cada pe de tomate: ";

    for(i = 0; i  < totalTomates; ++i){

        cin >> tomates[i];
    }

    // Linhas: posição / largura;
    // Colunas: posição % largura;

    for (int valor : tomates){

        int posicao = valor - 1;

        if(posicao >= 0 && posicao < (altura * largura)){

            linha = posicao / largura;
            coluna = posicao % largura;

            if(terreno[linha][coluna] == 'T'){

                totalTomatesPerdidos++;
            }
            else{

                terreno[linha][coluna] = 'T';
            }
        }
        else{
            
            totalTomatesPerdidos++;
        }

    }

    for(i = 0; i < altura; ++i){

        for(j = 0; j < largura; ++j){

            if(terreno[i][j] == 'T'){
                
                if(i - 1 >= 0 && terreno[i - 1][j] == '.'){

                    terreno[i - 1][j] = '#';
                }
                if(i + 1 < altura && terreno[i + 1][j] == '.'){

                    terreno[i + 1][j] = '#';
                }
                if(j - 1 >= 0 && terreno[i][j - 1] == '.'){

                    terreno[i][j - 1] = '#';
                }
                if(j + 1 < largura && terreno[i][j + 1] == '.'){

                    terreno[i][j + 1] = '#';
                }

            }
        }
    }

    cout << "\n- Voce conseguiu plantar " << totalTomates - totalTomatesPerdidos << " tomates com sucesso!\n\n";

    
    for(i = 0; i < altura; ++i){

        for(j = 0; j < largura; ++j){

            if(terreno[i][j] == '#'){

                totalArmadilhas++;
            }

            cout << " " << terreno[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "- Total de armadilhas instaladas : " << totalArmadilhas << "\n\n";

    return 0;
}
