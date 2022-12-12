#pragma once
#include <string>
#include <vector>
#include "../Pokemon/Pokemon.hpp"

class NormalType: public Pokemon{
    public:
        NormalType(std::string name, std::string type, std::string category);
        NormalType(std::string name, std::string type, std::string category, std::vector<std::string> skills);
        NormalType();
        void evolve();
};