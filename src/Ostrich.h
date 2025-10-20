#ifndef OSTRICH_H
#define OSTRICH_H

#include "Bird.h"

class Ostrich : public Bird {
public:
    Ostrich(const std::string &name_, double weight_, double wingSpan_);
    void type() const override;
};

#endif // OSTRICH_H
