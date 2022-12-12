#pragma once
#include <string>
#include <vector>

class Pokemon {

    protected:
        std::string name;
        std::string type;
        std::string category;
        std::vector<std::string> skills;

    public:
        Pokemon(std::string name, std::string type, std::string category);
        Pokemon(std::string name, std::string type, std::string category, std::vector<std::string> skills);
        Pokemon();
        void pokemonData();
        std::vector<std::string> getSkills();
        std::string getName();
        
        virtual void evolve();
};