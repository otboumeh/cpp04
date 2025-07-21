#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "math.h"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;
// delete i;

// return 0;
// }

int main()
{
	int	animal_number = 2;
	const Animal** animals = new const Animal*[animal_number];
	for (int i = 0; i < animal_number; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	for (int i = 0; i < animal_number; i++)
		delete animals[i];
	delete[] animals;
	return (0);
}

// Animal a;        // Compiler error!
// Animal* ptr = new Animal(); // Also invalid!

// Animal* ptr = new Dog();    // Works!
// ptr->makeSound();           // Also
