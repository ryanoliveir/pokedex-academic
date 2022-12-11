#include <iostream>
#include <string>
#include <vector>

#include "./Pokemon/Pokemon.hpp"
#include "./Pokedex/Pokedex.hpp"

using namespace std;

int main(){

      string name = "Pikachu";
      string type = "Electric";
      string category = "mouse";
      vector<string> skills = {"Thunder Shock", "Wild Charge", "Iron Tail"};
      vector<string> pokemonSkills;
      Pokemon pokemon(name, type, category, skills);

      pokemon.pokemonData();

      pokemonSkills = pokemon.getSkills();

      for (int i = 0; i < pokemonSkills.size(); i++){
        cout << pokemonSkills[i] << endl;
      }


      string user = "Ryan";

      Pokedex userPokedex(user);

      userPokedex.addPokemon(pokemon);
      userPokedex.listPokemons();
      
      Pokemon pokemonSearch = userPokedex.getPokemon(name);
      pokemonSearch.pokemonData();
    

    return 0;
}