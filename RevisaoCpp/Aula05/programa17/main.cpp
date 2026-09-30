#include <iostream>
#include "pokemon.hpp" 

int main(void)
{
    
    cout << "\n* Exemplo pokemons *\n\n";

    Pokemon pokemons; 

    pokemons.nome = "Pikachu";
    pokemons.tipo = "Eletrico";
    pokemons.nivel = 5;
    pokemons.hp = 25;

    cout << " >> Dados do pokemons\n\n";
    cout << "Nome.: " << pokemons.nome << "\n";
    cout << "Tipo.: " << pokemons.tipo << "\n";
    cout << "Nivel: " << pokemons.nivel << "\n";
    cout << "HP...: " << pokemons.hp << "\n\n";

    cout << ">> Um pokemon selvagem apareceu... Vamos batalhar!\n\n";
    cout << "Seu pikachu venceu uma luta muito dificil...";
    cout << "Ele ganhou 50 pontos!\n";

    pokemons.aumentaHP(50);

    cout << "Olhe, oque esta acontecendo? Seu Pikachu esta brilhando!\n";

    pokemons.nivel++;

    cout << "O Pikachu subio de nivel\n\n";

    cout << " >> Dados do pokemons\n\n";
    cout << "Nome.: " << pokemons.nome << "\n";
    cout << "Tipo.: " << pokemons.tipo << "\n";
    cout << "Nivel: " << pokemons.nivel << "\n";
    cout << "HP...: " << pokemons.hp << "\n\n";

    //COMPILACAO 
    //g++ main.cpp pokemon.cpp -o main.exe -std=c++23 -Wall -Wextra
    return 0;
}