#include <iostream>
#include <string>
#include "Animal.h"
#include "Zoo.hpp"
#include <vector>

// Mammal class
class Mammal : public Animal {
protected:
	int numLegs;
	double noseLength; // in cm

public:
	Mammal(const std::string &name_, double weight_, const std::string &movement_, int legs_, double noseLen_) :
		Animal(name_, weight_, movement_), numLegs(legs_), noseLength(noseLen_) {}

	void print() const override {
		Animal::print();
		std::cout << ", Type: mammal, Legs: " << numLegs << ", Nose length: " << noseLength << "cm";
	}

	void type() const override { std::cout << "mammal"; }
	void moveDescription() const override { std::cout << movement; }
};

// Bird class
class Bird : public Animal {
protected:
	double wingSpan; // in meters
	bool canFly;

public:
    Bird(const std::string &name_, double weight_, const std::string &movement_, double wingSpan_, bool canFly_) :
        Animal(name_, weight_, movement_), wingSpan(wingSpan_), canFly(canFly_) {}

	// Convenience constructor: assume movement and canFly from wingspan
	Bird(const std::string &name_, double weight_, double wingSpan_) :
		Animal(name_, weight_, "flies around"), wingSpan(wingSpan_), canFly(true) {}

	void print() const override {
		Animal::print();
		std::cout << ", Type: bird, Wingspan: " << wingSpan << "m, Can fly: " << (canFly ? "yes" : "no");
	}

	void type() const override { std::cout << "bird"; }

	void moveDescription() const override {
		if (canFly) std::cout << "flies with wings";
		else std::cout << movement;
	}
};

// Fish class
class Fish : public Animal {
protected:
	bool saltwater; // true: saltwater, false: freshwater
	double length; // in cm

public:
	Fish(const std::string &name_, double weight_, const std::string &movement_, bool saltwater_, double length_) :
		Animal(name_, weight_, movement_), saltwater(saltwater_), length(length_) {}

	void print() const override {
		Animal::print();
		std::cout << ", Type: fish, Habitat: " << (saltwater ? "saltwater" : "freshwater") << ", Length: " << length << "cm";
	}

	void type() const override { std::cout << "fish"; }

	void moveDescription() const override { std::cout << "swims"; }
};

// Bonus classes: Penguin, Ostrich and Dolphin
class Penguin : public Bird {
public:
	Penguin(const std::string &name_, double weight_, double wingSpan_) :
		Bird(name_, weight_, "walks and toboggans", wingSpan_, false) {}

	void type() const override { std::cout << "penguin"; }
};

class Ostrich : public Bird {
public:
	Ostrich(const std::string &name_, double weight_, double wingSpan_) :
		Bird(name_, weight_, "runs fast", wingSpan_, false) {}

	void type() const override { std::cout << "ostrich"; }
};

class Dolphin : public Mammal {
public:
	Dolphin(const std::string &name_, double weight_, double noseLen_) :
		Mammal(name_, weight_, "swims gracefully", 0, noseLen_) {}

	void type() const override { std::cout << "dolphin"; }

	void moveDescription() const override { std::cout << "swims using tail flukes"; }
};

int main()
{
    // Test base Animal class for Q1
    Animal a("Elephant", 5000.0, "walks slowly");
	a.print();
	std::cout << std::endl;
	a.info_displacement();

	// Demonstrate polymorphism for Q2
	Animal *a1 = new Mammal("Elephant", 5000.0, "walks slowly", 4, 150.0);
	Animal *a2 = new Bird("Sparrow", 0.02, "hops", 0.25, true);
	Animal *a3 = new Fish("Carp", 2.5, "", false, 30.0);
	Animal *a4 = new Penguin("Pingu", 30.0, 0.6);
	Animal *a5 = new Ostrich("Ozzy", 100.0, 2.0);
	Animal *a6 = new Dolphin("Dolly", 150.0, 25.0);

	Animal *zoo[] = {a1,a2,a3,a4,a5,a6};

	for (Animal* p : zoo) {
		p->print();
		std::cout << std::endl;
		p->moveDescription();
		std::cout << std::endl;
	}

	for (Animal* p : zoo) delete p;

	// Q3: polymorphism test - call derived method through base pointer
	Animal *pA = new Bird("Coco", 1.5, 3.0);
	pA->print();
	std::cout << std::endl;
	delete pA;

	// Q4: create a collection of animals in a Zoo (vector<Animal*>)
	std::vector<Animal*> Zoo;
	Zoo.push_back(new Bird("Coco", 1.5, 3.0));
	Zoo.push_back(new Fish("Dory", 0.3, "", true, 10.0));
	Zoo.push_back(new Mammal("Wide_Ethelbert", 70.0, "runs", 2, 10.0));
	Zoo.push_back(new Penguin("Eiscue", 25.0, 0.8));
	Zoo.push_back(new Ostrich("Bipbip", 90.0, 2.1));

	info_displacement(Zoo);

	std::cout << "Total weight of the animals in the zoo is " << total_weight(Zoo) << std::endl;

	// free allocated memory
	for (size_t i = 0; i < Zoo.size(); ++i) delete Zoo[i];
	return 0;
}