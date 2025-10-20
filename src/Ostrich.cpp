#include "Ostrich.h"
#include <iostream>

Ostrich::Ostrich(const std::string &name_, double weight_, double wingSpan_)
    : Bird(name_, weight_, "runs fast", wingSpan_, false) {}

void Ostrich::type() const { std::cout << "ostrich"; }
