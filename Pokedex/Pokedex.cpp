#include "Pokedex.hpp"
#include <iostream>
#include <vector>
#include <string>

Pokedex::Pokedex(std::string userName):
    userName(userName)
{

}

Pokedex::Pokedex(){}

void Pokedex::registerPokemon(Pokemon pokemon){
    pokemons.push_back(pokemon);
    // pokemonNumber += 1;

}

void Pokedex::listPokemons(){
    for (int i = 0; i < pokemons.size(); i++)
    {   
        std::cout << "#" << i + 1 << "\n" << std::endl;
        pokemons[i].pokemonData();
    }
    
}


int Pokedex::pokemonsNumber(){
    return pokemons.size();
}


std::vector<Pokemon> Pokedex::getPokemons(){
    return pokemons;
}

// std::pair<std::string, Pokemon> Pokedex::getPokemon(std::string pokemonName){
//     for (int i = 0; i < pokemons.size(); i++){
//         if (pokemons[i].getName() == pokemonName){
//             return std::make_pair("Pokemon finded", pokemons[i]);
//         }
//     }
// }

Pokemon Pokedex::getPokemon(std::string pokemonName){
    for (int i = 0; i < pokemons.size(); i++){
        if (pokemons[i].getName() == pokemonName){
            std::cout << "Find "<< std::endl;
            return pokemons[i];
        }
    }
}

std::string Pokedex::getUserName(){
    return userName;
}

void Pokedex::setUserName(std::string userName){
    this->userName = userName;
}