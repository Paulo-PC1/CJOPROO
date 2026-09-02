#ifndef POKEMON_HPP
#define POKEMON_HPP

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
    void aumentaHP(int pontos);
};

#endif // !POKEMON_HPP