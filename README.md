# Pokedex


To compile

```bash
$ g++ -o main ./*.cpp Pokemon/*.cpp Pokedex/*.cpp LengendaryType/*.cpp ./NormalType/*.cpp ./Evolution/*.cpp
```

Data to test
```txt

Name: Pikachu
Type: Eletric
Category: Mouse
Normal(n) or Lendary(l) ?: n

Name: Bulbasaur
Type: Grass/Poison
Category: Overgrow
Normal(n) or Lendary(l) ?: n

Name: Articuno
Type: Ice
Category: Pressure
Normal(n) or Lendary(l) ?: l

```


Initial tests of Class e methods: Everything working

```c++

Evolution evolution;

      string name = "Pikachu";
      string type = "Electric";
      string category = "mouse";
      vector<string> skills = {"Thunder Shock", "Wild Charge", "Iron Tail"};
      vector<string> pokemonSkills;
      NormalType pokemon(name, type, category, skills);
    

      string name2 = "Charmander";
      string type2 = "Fire";
      string category2 = "lizard";
      vector<string> skills2 = {"Ember", "Flamethrower", "Flame Burst"};
    //   Pokemon pokemon2(name2, type2, category2, skills2);  

        LengendaryType pokemon2(name2, type2, category2, skills2); 
        pokemon.pokemonData();
        // pokemon2.pokemonData();

        pokemonSkills = pokemon.getSkills();

        evolution.evolveVerification(&pokemon);
        evolution.evolveVerification(&pokemon2);

        // for (int i = 0; i < pokemonSkills.size(); i++){
        //     cout << pokemonSkills[i] << endl;
        // }


    //   string user = "Ryan";

    //   Pokedex userPokedex(user);

    //   userPokedex.registerPokemon(pokemon);
    //   userPokedex.registerPokemon(pokemon2);
    //   userPokedex.listPokemons();
      
    //   Pokemon pokemonSearch = userPokedex.getPokemon(name);
    //   pokemonSearch.pokemonData();
    

```