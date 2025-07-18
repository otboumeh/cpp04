#include "Dog.hpp"

	Dog::Dog(){
        type = "Dog";
        std::cout<<"Dog constructor called 'Wooof woof'"<<std::endl;
    }

    Dog::~Dog(){
        std::cout<<"Dog destructor called 'Wooof woof'"<<std::endl;
    }     

    Dog::Dog(const Dog& other)
{
	std::cout << "Dog copy constructor called! 'Wooof woof'" << std::endl;
	this->type = other.type;
	
}

Dog&	Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called! 'Wooof woof'" << std::endl;
	if (this != &other)
        this->type = other.type;
	return (*this);
}
	void Dog::makeSound() const{
	std::cout << "Wooof woof" << std::endl;
    };
