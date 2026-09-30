// Programa uso ponteiro para structs

#include <iostream>
#include <string>
#include <vector>

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

struct Treinador
{
    string nome;
    string cidade;

    vector<Pokemon*> pokemons;
};


int main(void)
{
    
    cout << "\n* Exemplo Pokemon *\n\n";

    Treinador *treinador = new Treinador;

    treinador->nome = "Ash Ketchun";
    treinador->cidade = "Pallet Town";

    Pokemon *pikachu = new Pokemon;

    pikachu->nome = "Pikachu";
    pikachu->tipo = "Eletrico";
    pikachu->nivel = 40;
    pikachu->hp = 85;
    
    Pokemon *greninja = new Pokemon;

    greninja->nome = "Greninja";
    greninja->tipo = "Agua/Sombrio";
    greninja->nivel = 35;
    greninja->hp = 60;
    
    Pokemon *hawlucha = new Pokemon;

    hawlucha->nome = "Hawlucha";
    hawlucha->tipo = "Lutador/Eletrico";
    hawlucha->nivel = 32;
    hawlucha->hp = 55;

    treinador->pokemons.push_back(pikachu);
    treinador->pokemons.push_back(greninja);
    treinador->pokemons.push_back(hawlucha);

    cout << ">> Dados do Treinador\n\n";
    cout << "Nome..:" << treinador->nome << "\n";
    cout << "Cidade: " << treinador->cidade << "\n\n";

    for(Pokemon *pokemon : treinador->pokemons){
        cout << "Nome.: " << pokemon->nome << "\n";
        cout << "Tipo.: " << pokemon->tipo << "\n";
        cout << "Nivel: " << pokemon->nivel << "\n";
        cout << "HP...: " << pokemon->hp << "\n\n";
    }

    for(Pokemon *pokemon : treinador->pokemons){
        delete pokemon;
    }

    delete treinador;

    return 0;
}