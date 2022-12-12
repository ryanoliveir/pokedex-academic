#include "LengendaryType.hpp"
#include <iostream>
#include <string>
#include <vector>


LengendaryType::LengendaryType(std::string name, std::string type, std::string category){
    this->name = name;
    this->type = type;
    this->category = category;
}


LengendaryType::LengendaryType(std::string name, std::string type, std::string category, std::vector<std::string> skills){
    this->name = name;
    this->type = type;
    this->category = category;
    this->skills = skills;   
}

LengendaryType::LengendaryType(){}

void LengendaryType::evolve(){
    std::cout << "evolve" << std::endl;
}