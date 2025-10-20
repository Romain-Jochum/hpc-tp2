#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
protected:
    double wingSpan; // in meters
    bool canFly;

public:
    Bird(const std::string &name_, double weight_, const std::string &movement_, double wingSpan_, bool canFly_);
    Bird(const std::string &name_, double weight_, double wingSpan_);

    void print() const override;
    void type() const override;
    void moveDescription() const override;
};

#endif // BIRD_H
