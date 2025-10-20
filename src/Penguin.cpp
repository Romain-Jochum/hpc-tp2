#include "Penguin.h"
#include <iostream>

Penguin::Penguin(const std::string &name_, double weight_, double wingSpan_)
    : Bird(name_, weight_, "walks and toboggans", wingSpan_, false) {}

void Penguin::type() const { std::cout << "penguin"; }
