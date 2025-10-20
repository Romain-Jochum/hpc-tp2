#ifndef DOLPHIN_H
#define DOLPHIN_H

#include "Mammal.h"

class Dolphin : public Mammal {
public:
    Dolphin(const std::string &name_, double weight_, double noseLen_);
    void type() const override;
    void moveDescription() const override;
};

#endif // DOLPHIN_H
