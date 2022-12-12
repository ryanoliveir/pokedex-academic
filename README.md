# Pokedex


To compile

```bash
$ g++ -o main ./*.cpp Pokemon/*.cpp
```


```c++

int main(){

      string name = "Pikachu";
      string type = "Electric";
      string category = "mouse";
      vector<string> skills = {"Thunder Shock", "Wild Charge", "Iron Tail"};
      vector<string> pokemonSkills;
      Pokemon pokemon(name, type, category, skills);


      string name2 = "Charmander";
      string type2 = "Fire";
      string category2 = "lizard";
      vector<string> skills2 = {"Ember", "Flamethrower", "Flame Burst"};
      Pokemon pokemon2(name2, type2, category2, skills2);  


      pokemon.pokemonData();
      pokemon2.pokemonData();

      pokemonSkills = pokemon.getSkills();

      for (int i = 0; i < pokemonSkills.size(); i++){
        cout << pokemonSkills[i] << endl;
      }


      string user = "Ryan";

      Pokedex userPokedex(user);

      userPokedex.registerPokemon(pokemon);
      userPokedex.registerPokemon(pokemon2);
      userPokedex.listPokemons();
      
      Pokemon pokemonSearch = userPokedex.getPokemon(name);
      pokemonSearch.pokemonData();
    
        

    return 0;
}

```