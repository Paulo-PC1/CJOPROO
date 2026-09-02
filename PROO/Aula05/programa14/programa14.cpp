//Programa demonstra uso de Enum Class (enumeração com escopo)

#include <iostream>

using namespace std;
enum class EstadoJogo { 
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};

void mostrarEstado(EstadoJogo estado){

    switch(estado){
        
        case EstadoJogo::MenuPrincipal:
            cout << ">> Voce esta no Menu Principal.\n";
            break;
        
        case EstadoJogo::Jogando:
            cout << ">> O jogo esta em andamento...\n";
            break;

        case EstadoJogo::Pausado:
            cout << "O jogo esta pausado...\n";
            break;

        case EstadoJogo::GameOver:
            cout << "Game Over!\n";
            break;

        default:
            cout << "Estado desconhecido.\n";
    }
}

int main(void)
{
    cout << "Exemplo de Enumeracao (Enum Class)\n\n";

    EstadoJogo estadoAtual = EstadoJogo::MenuPrincipal;

    mostrarEstado(estadoAtual);

    estadoAtual = EstadoJogo::Jogando;

    mostrarEstado(estadoAtual);

    estadoAtual = EstadoJogo::Pausado;

    mostrarEstado(estadoAtual);

    estadoAtual = EstadoJogo::Jogando;

    mostrarEstado(estadoAtual);

    estadoAtual = EstadoJogo::GameOver;

    mostrarEstado(estadoAtual);

    estadoAtual = EstadoJogo::MenuPrincipal;

    mostrarEstado(estadoAtual);


    return 0;
}