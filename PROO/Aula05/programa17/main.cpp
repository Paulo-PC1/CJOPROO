#include <iostream>
#include "pokemon.hpp" 

int main(void)
{
    
    cout << "\n* Exemplo Pokemons *\n\n";

    Pokemon Pokemons; 

    Pokemons.nome = "Pikachu";
    Pokemons.tipo = "Eletrico";
    Pokemons.nivel = 5;
    Pokemons.hp = 25;

    cout << " >> Dados do Pokemons\n\n";
    cout << "Nome.: " << Pokemons.nome << "\n";
    cout << "Tipo.: " << Pokemons.tipo << "\n";
    cout << "Nivel: " << Pokemons.nivel << "\n";
    cout << "HP...: " << Pokemons.hp << "\n\n";

    cout << ">> Um pokemon selvagem apareceu... Vamos batalhar!\n\n";
    cout << "Seu pikachu venceu uma luta muito dificil...";
    cout << "Ele ganhou 50 pontos!\n";

    Pokemons.aumentaHP(50);

    cout << "Olhe, oque esta acontecendo? Seu Pikachu esta brilhando!\n";

    Pokemons.nivel++;

    cout << "O Pikachu subio de nivel\n\n";

    cout << " >> Dados do Pokemons\n\n";
    cout << "Nome.: " << Pokemons.nome << "\n";
    cout << "Tipo.: " << Pokemons.tipo << "\n";
    cout << "Nivel: " << Pokemons.nivel << "\n";
    cout << "HP...: " << Pokemons.hp << "\n\n";

    delete Pokemons;


    //COMPILACAO 
    //g++ main.cpp pokemon.cpp -o main.exe -std=c++23 -Wall -Wextra
    return 0;
}