#include "Pokemon.hpp"
#include <iostream>
#include <vector>
#include <string>

Pokemon::Pokemon(std::string name, std::string type, std::string category):
    name(name),
    type(type),
    category(category)
{

}


Pokemon::Pokemon(std::string name, std::string type, std::string category, std::vector<std::string> skills):
    name(name),
    type(type),
    category(category),
    skills(skills)
{
    
}

Pokemon::Pokemon(){}

void Pokemon::pokemonData(){
    std::cout << "Pokemon Data" << std::endl;
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Type: " << this->type << std::endl;
    
    //todo: make a for to show skills

    
}

std::vector<std::string> Pokemon::getSkills(){
    return skills;
}

std::string Pokemon::getName(){
    return this->name;
}


void Pokemon::evolve(){};