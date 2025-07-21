#ifndef Dog_HPP
#define Dog_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal{
	private:
	Brain *dog_brain;
	public:

	Dog();                    
	~Dog();

	
	Dog(const Dog& other);             
	Dog&	operator=(const Dog &other);
	virtual void makeSound() const;


};


#endif