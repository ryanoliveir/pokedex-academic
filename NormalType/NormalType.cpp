#include "NormalType.hpp"
#include <iostream>
#include <string>
#include <vector>


NormalType::NormalType(std::string name, std::string type, std::string category){
    this->name = name;
    this->type = type;
    this->category = category;
}


NormalType::NormalType(std::string name, std::string type, std::string category, std::vector<std::string> skills){
    this->name = name;
    this->type = type;
    this->category = category;
    this->skills = skills;   
}

NormalType::NormalType(){}

void NormalType::evolve(){
    std::cout << "evolve" << std::endl;
}