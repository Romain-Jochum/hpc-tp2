#ifndef FISH_H
#define FISH_H

#include "Animal.h"

class Fish : public Animal {
protected:
    bool saltwater;
    double length; // in cm

public:
    Fish(const std::string &name_, double weight_, const std::string &movement_, bool saltwater_, double length_);

    void print() const override;
    void type() const override;
    void moveDescription() const override;
};

#endif // FISH_H
