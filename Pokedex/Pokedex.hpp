#pragma once
#include <string>
#include "../Pokemon/Pokemon.hpp"

class Pokedex{
    private:
        std::string userName;
        // int pokemonNumber = 0;
        std::vector<Pokemon> pokemons;
    public:
        Pokedex(std::string userName);
        void addPokemon(Pokemon pokemon);
        void listPokemons();

        int pokemonsNumber();
        std::vector<Pokemon> getPokemons();
        Pokemon getPokemon(std::string pokemonName);
        // std::pair<std::string, Pokemon> getPokemon(std::string pokemonName);
};