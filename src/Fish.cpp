#include "Fish.h"
#include <iostream>

Fish::Fish(const std::string &name_, double weight_, const std::string &movement_, bool saltwater_, double length_)
    : Animal(name_, weight_, movement_), saltwater(saltwater_), length(length_) {}

void Fish::print() const {
    Animal::print();
    std::cout << ", Type: fish, Habitat: " << (saltwater ? "saltwater" : "freshwater") << ", Length: " << length << "cm";
}

void Fish::type() const { std::cout << "fish"; }
void Fish::moveDescription() const { std::cout << "swims"; }
