#ifndef ZOO_HPP
#define ZOO_HPP

#include "Animal.h"
#include <vector>
#include <iostream>

double total_weight(const std::vector<Animal*>& zoo);
void info_displacement(const std::vector<Animal*>& zoo);
void inventory(const std::vector<Animal*>& zoo);

#endif // ZOO_HPP
