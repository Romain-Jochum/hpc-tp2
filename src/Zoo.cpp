#include "Zoo.hpp"

double total_weight(const std::vector<Animal*>& zoo)
{
    double sum = 0.0;
    for (Animal* a : zoo) {
        if (a) sum += a->getWeight();
    }
    return sum;
}

void info_displacement(const std::vector<Animal*>& zoo)
{
    for (Animal* a : zoo) {
        if (a) a->info_displacement();
    }
}

void inventory(const std::vector<Animal*>& zoo)
{
    for (Animal* a : zoo) {
        if (a) {
            a->print();
            std::cout << std::endl;
        }
    }
}
