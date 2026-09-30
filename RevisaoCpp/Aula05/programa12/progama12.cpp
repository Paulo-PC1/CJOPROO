// Programa uso ponteiro para structs

#include <iostream>
#include <string>

using namespace std;

struct Pokemon 
{
    //Atributos
    string nome;
    string tipo;
    int nivel;
    int hp;

    //Metodo
    void aumentaHP(int pontos){
        hp += pontos;
    }
};

int main(void)
{
    
    cout << "\n* Exemplo Pokemon *\n\n";

    Pokemon *ptrPokemon = new Pokemon; 

    ptrPokemon->nome = "Pikachu";
    ptrPokemon->tipo = "Eletrico";
    ptrPokemon->nivel = 5;
    ptrPokemon->hp = 25;

    cout << " >> Dados do Pokemon\n\n";
    cout << "Nome.: " << ptrPokemon->nome << "\n";
    cout << "Tipo.: " << ptrPokemon->tipo << "\n";
    cout << "Nivel: " << ptrPokemon->nivel << "\n";
    cout << "HP...: " << ptrPokemon->hp << "\n\n";

    cout << ">> Um pokemon selvagem apareceu... Vamos batalhar!\n\n";
    cout << "Seu pikachu venceu uma luta muito dificil...";
    cout << "Ele ganhou 50 pontos!\n";

    ptrPokemon->aumentaHP(50);

    cout << "Olhe, oque esta acontecendo? Seu Pikachu esta brilhando!\n";

    ptrPokemon->nivel++;

    cout << "O Pikachu subio de nivel\n\n";

    cout << " >> Dados do Pokemon\n\n";
    cout << "Nome.: " << ptrPokemon->nome << "\n";
    cout << "Tipo.: " << ptrPokemon->tipo << "\n";
    cout << "Nivel: " << ptrPokemon->nivel << "\n";
    cout << "HP...: " << ptrPokemon->hp << "\n\n";

    delete ptrPokemon;

    return 0;
}