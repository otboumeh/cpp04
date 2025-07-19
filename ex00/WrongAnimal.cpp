#include "WrongAnimal.hpp"

	WrongAnimal::WrongAnimal() : type("WrongAnimal"){
        std::cout<<"WrongAnimal constructor called "<<std::endl;
    }

    WrongAnimal::~WrongAnimal(){
        std::cout<<"WrongAnimal destructor called"<<std::endl;
    }     

    WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	this->type = other.type;
	
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment operator called!" << std::endl;
	if (this != &other)
        this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const{
    std::cout << "No sound for no specefic Wronganimal" << std::endl;
}

const std::string&  WrongAnimal::getType() const{
    return (type);
}
