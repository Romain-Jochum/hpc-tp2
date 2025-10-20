#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
protected:
    int numLegs;
    double noseLength; // in cm

public:
    Mammal(const std::string &name_, double weight_, const std::string &movement_, int legs_, double noseLen_);

    void print() const override;
    void type() const override;
    void moveDescription() const override;
};

#endif // MAMMAL_H
