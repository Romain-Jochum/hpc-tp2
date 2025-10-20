#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    double weight;
    std::string movement;

public:
    // Constructor
    Animal(const std::string &name_, double weight_, const std::string &movement_) :
        name(name_), weight(weight_), movement(movement_) {}
    virtual ~Animal() = default;

    // Accessors
    std::string getName() const { return name; }
    double getWeight() const { return weight; }
    void setName(const std::string &n) { name = n; }
    void setMovement(const std::string &m) { movement = m; }
    void setWeight(double w) { weight = w; }

    // Member functions
    // Print member variable values
    virtual void print() const {
        std::cout << "Name: " << name << ", Weight: " << weight << "kg, Movement: " << movement;
    }

    // How the animal moves
    virtual void moveDescription() const {
        std::cout << movement;
    }

    // What type of animal it is
    virtual void type() const {
        std::cout << "animal";
    }

    // Prints information about the animal and how it moves
    void info_displacement();
};

inline void Animal::info_displacement()
{
    std::cout << "The ";
    type();
    std::cout << " (" << name << ") ";
    moveDescription();
    std::cout << std::endl;
}

#endif // ANIMAL_H
