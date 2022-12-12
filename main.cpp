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

int main()
{
    int menuOption;

    string name;
    string type;
    string category;
    string level;
    vector<string> skills;

    vector<Pokemon> pokemonsAvailable;

    string user;

    header();

    do
    {

        cout << "[1] Register Pokemon" << endl;
        cout << "[2] Register Pokedex" << endl;
        cout << "[3] List Pokemons" << endl;
        cout << "[4] My Pokedex" << endl;
        cout << "[5] Scan Pokemon" << endl;
        cout << "[6] Pokemon Data" << endl;
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

            Pokedex pokedex(user);

            cout << "[+] Congratulations!, you now have a pokedex [+]" << endl;
            enterInput();
            clear();

            break;
        }
        case 3:
            for (int i = 0; i < pokemonsAvailable.size(); i++)
            {
                pokemonsAvailable[i].pokemonData();
            }
            enterInput();
            clear();

            break;
        case 4:

            break;
        case 5:
            

            break;
        case 6:

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

// string vector_input()
// {
//     vector<string> data;
//     _flushall();
//     cin >> data;
//     return data;
// }