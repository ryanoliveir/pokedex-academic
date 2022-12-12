#pragma once
#include <string>
#include <vector>
#include "../Pokemon/Pokemon.hpp"

class LengendaryType: public Pokemon{
    public:
        LengendaryType(std::string name, std::string type, std::string category);
        LengendaryType(std::string name, std::string type, std::string category, std::vector<std::string> skills);
        LengendaryType();
        void evolve();
};