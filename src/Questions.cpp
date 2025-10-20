#include <iostream>
#include <string>
#include "Animal.h"
#include "Zoo.hpp"
#include <vector>
#include "Mammal.h"
#include "Bird.h"
#include "Fish.h"
#include "Penguin.h"
#include "Ostrich.h"
#include "Dolphin.h"

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