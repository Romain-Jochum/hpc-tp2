#include "Bird.h"
#include <iostream>

Bird::Bird(const std::string &name_, double weight_, const std::string &movement_, double wingSpan_, bool canFly_)
    : Animal(name_, weight_, movement_), wingSpan(wingSpan_), canFly(canFly_) {}

Bird::Bird(const std::string &name_, double weight_, double wingSpan_)
    : Animal(name_, weight_, "flies around"), wingSpan(wingSpan_), canFly(true) {}

void Bird::print() const {
    Animal::print();
    std::cout << ", Type: bird, Wingspan: " << wingSpan << "m, Can fly: " << (canFly ? "yes" : "no");
}

void Bird::type() const { std::cout << "bird"; }

void Bird::moveDescription() const {
    if (canFly) std::cout << "flies with wings";
    else std::cout << movement;
}
