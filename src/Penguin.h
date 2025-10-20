#ifndef PENGUIN_H
#define PENGUIN_H

#include "Bird.h"

class Penguin : public Bird {
public:
    Penguin(const std::string &name_, double weight_, double wingSpan_);
    void type() const override;
};

#endif // PENGUIN_H
