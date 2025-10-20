#include "Dolphin.h"
#include <iostream>

Dolphin::Dolphin(const std::string &name_, double weight_, double noseLen_)
    : Mammal(name_, weight_, "swims gracefully", 0, noseLen_) {}

void Dolphin::type() const { std::cout << "dolphin"; }

void Dolphin::moveDescription() const { std::cout << "swims using tail flukes"; }
