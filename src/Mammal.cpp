#include "Mammal.h"
#include <iostream>

Mammal::Mammal(const std::string &name_, double weight_, const std::string &movement_, int legs_, double noseLen_)
    : Animal(name_, weight_, movement_), numLegs(legs_), noseLength(noseLen_) {}

void Mammal::print() const {
    Animal::print();
    std::cout << ", Type: mammal, Legs: " << numLegs << ", Nose length: " << noseLength << "cm";
}

void Mammal::type() const { std::cout << "mammal"; }
void Mammal::moveDescription() const { std::cout << movement; }
