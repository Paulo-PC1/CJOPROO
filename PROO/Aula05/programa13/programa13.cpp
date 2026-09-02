// Programa uso ponteiro para structs

#include <iostream>
#include <string>
// #include <vector>
// #include <array>

using namespace std;


struct Treinador
{
    string nomeTreinador;
    string cidadeTreinador;

    struct Pokemon 
    {
        //Atributos
        string nomePokemon;
        string tipoPokemon;
        int nivelPokemon;
        int hpPokemon;
        
        //Metodo
        void aumentaHP(int pontos){
            hpPokemon += pontos;
        }
    };
};

int main(void)
{
    
    cout << "\n* Exemplo Pokemon *\n\n";

    Treinador *ptrTreinador = new Treinador;
    Treinador::Pokemon *ptrPokemon = new Treinador::Pokemon;
    Treinador::Pokemon *ptrPokemon2 = new Treinador::Pokemon;
    Treinador::Pokemon *ptrPokemon3 = new Treinador::Pokemon;

    cout << ">> Dados do Treinador\n\n";

    ptrTreinador->nomeTreinador = "Ash Ketchum";
    ptrTreinador->cidadeTreinador = "Pallet Town";

    cout << ">> Pokemons do Treinador\n\n";

    ptrPokemon->nomePokemon = "Pikachu";
    ptrPokemon->tipoPokemon = "Eletrico";
    ptrPokemon->nivelPokemon = 40;
    ptrPokemon->hpPokemon = 85;

    ptrPokemon2->nomePokemon = "Greninja";
    ptrPokemon2->tipoPokemon = "Agua/Sombrio";
    ptrPokemon2->nivelPokemon = 36;
    ptrPokemon2->hpPokemon = 60;

    ptrPokemon3 ->nomePokemon = "Noivern";
    ptrPokemon3->tipoPokemon = "Dragao/Voador";
    ptrPokemon3->nivelPokemon = 40;
    ptrPokemon3->hpPokemon = 85;

    cout << " >> Dados do Pokemon\n\n";

    cout << "Nome.: " << ptrPokemon->nomePokemon << "\n";
    cout << "Tipo.: " << ptrPokemon->tipoPokemon << "\n";
    cout << "Nivel: " << ptrPokemon->nivelPokemon << "\n";
    cout << "HP...: " << ptrPokemon->hpPokemon << "\n\n";

    cout << "Nome.: " << ptrPokemon2->nomePokemon << "\n";
    cout << "Tipo.: " << ptrPokemon2->tipoPokemon << "\n";
    cout << "Nivel: " << ptrPokemon2->nivelPokemon << "\n";
    cout << "HP...: " << ptrPokemon2->hpPokemon << "\n\n";

    cout << "Nome.: " << ptrPokemon3->nomePokemon << "\n";
    cout << "Tipo.: " << ptrPokemon3->tipoPokemon << "\n";
    cout << "Nivel: " << ptrPokemon3->nivelPokemon << "\n";
    cout << "HP...: " << ptrPokemon3->hpPokemon << "\n\n";
    
    return 0;
}