#include <iostream>
#include <string>
#include <vector>

#include "./Pokedex/Pokedex.hpp"
#include "./LengendaryType/LengendaryType.hpp"
#include "./NormalType/NormalType.hpp"
#include "./Evolution/Evolution.hpp"

using namespace std;

void header();
void clear();
void enterInput();
string input();
void listPokemonsAvailable(vector<Pokemon> pokemonsAvailable);

int main()
{
    int menuOption;

    string name;
    string type;
    string category;
    string level;
    vector<string> skills;

    vector<Pokemon> pokemonsAvailable;
    vector<Pokemon> pokemonsInPokedex;
    
    Pokedex pokedex;
    Evolution evolve;
    string user;
    string pokemonName;
    string pokemonSelected;


    header();

    do
    {

        cout << "[1] Register Pokemon" << endl;
        cout << "[2] Register Pokedex" << endl;
        cout << "[3] List Pokemons" << endl;
        cout << "[4] My Pokedex" << endl;
        cout << "[5] Scan Pokemon" << endl;
        cout << "[6] Check Evolution" << endl;
        cout << "[7] Exit" << endl;

        cin >> menuOption;
        clear();

        switch (menuOption)
        {
        case 1:
            cout << "[1] Register Pokemon" << endl;
            cout << "[*] Name: ";
            name = input();
            cout << "[*] Type: ";
            type = input();
            cout << "[*] Category: ";
            category = input();
            cout << "[*] Normal(n) or Lendary(l) ?: ";
            level = input();

            if (level == "n")
            {
                NormalType pokemon(name, type, category);
                pokemonsAvailable.push_back(pokemon);
            }
            else if (level == "l")
            {
                LengendaryType pokemon(name, type, category);
                pokemonsAvailable.push_back(pokemon);
            }
            clear();
            // cout << "[5] skills" << endl;
            // skills = vector_input();

            break;
        case 2:
        {
            cout << "[2] Register Pokedex" << endl;
            cout << "[*] Name: ";
            user = input();

            pokedex.setUserName(user);

            cout << "[+] Congratulations!, you now have a pokedex [+]" << endl;
            enterInput();
            clear();

            break;
        }
        case 3:

            if (pokemonsAvailable.size() == 0)
            {
                cout << "[-] No one pokemon registred" << endl;
                enterInput();
                clear();
            }
            else
            {
                for (int i = 0; i < pokemonsAvailable.size(); i++)
                {
                    pokemonsAvailable[i].pokemonData();
                }
                enterInput();
                clear();
            }

            break;
        case 4:

            cout << "[4] My Pokedex" << endl;
            cout << "[+] User: " << pokedex.getUserName() << endl;
            cout << "[+] Pokemons number: " << pokedex.pokemonsNumber() << endl;

            if (pokedex.pokemonsNumber() > 0)
            {
                pokedex.listPokemons();
            }
            enterInput();
            clear();

            break;
        case 5:

            cout << "[5] Scan Pokemon" << endl;
            cout << "[*] Select an Pokemon Name to scan" << endl;
            listPokemonsAvailable(pokemonsAvailable);
            
            cout << "[*] Pokemon Name: ";
            pokemonSelected = input();

            for (int i = 0; i < pokemonsAvailable.size(); i++)
            {   
                if (pokemonsAvailable[i].getName() == pokemonSelected) {
                    pokedex.registerPokemon(pokemonsAvailable[i]);

                    cout << "[+] Pokemon added in your Pokedex !" << endl;
                }
                enterInput();
                clear();
               
            }

            // enterInput();
            // clear();

        
            break;
        case 6:

            // Todo: check virtual method
            cout << "[6] Check Evolution" << endl;
            cout << "[*] Name of a pokemon from your pokedex: ";
            pokemonName = input();

            pokemonsInPokedex = pokedex.getPokemons();

            for(int i = 0; i < pokemonsInPokedex.size(); i++){
                if(pokemonsInPokedex[i].getName() == pokemonName) {
                    cout << "[*] find "<< endl;
                    evolve.evolveVerification(pokemonsInPokedex[i]);
                    
                }
            }
            enterInput();
            clear();

            break;
        case 7:
            exit(0);
            break;

        default:
            break;
        }

    } while (menuOption != 7);

    return 0;
}

void header()
{
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "|              POKEDEX SYSTEM                   |" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << endl;
}

void clear()
{
    system("clear || cls");
    header();
}

string input()
{
    string data;
    _flushall();
    cin >> data;
    return data;
}

void enterInput()
{
    cout << "\nPress Enter to Continue";
    _flushall();
    cin.ignore();
}

void listPokemonsAvailable(vector<Pokemon> pokemonsAvailable)
{
    if (pokemonsAvailable.size() == 0)
    {
        cout << "[-] No one pokemon registred" << endl;
        enterInput();
        clear();
    }
    else
    {
        for (int i = 0; i < pokemonsAvailable.size(); i++)
        {   
            std::cout << "\n[POKEMON #" << i+1 << "]" << std::endl;
            pokemonsAvailable[i].pokemonData();
        }

        
    }
}

// string vector_input()
// {
//     vector<string> data;
//     _flushall();
//     cin >> data;
//     return data;
// }