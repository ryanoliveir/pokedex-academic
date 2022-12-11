#include <iostream>
#include <string>
#include <vector>

#include "./Pokemon/Pokemon.hpp"

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

    return 0;
}