#include "Cat.hpp"

	Cat::Cat(){
        type = "Cat";
        std::cout<<"Cat constructor called 'Miaaaaaiuu' "<<std::endl;
    }

    Cat::~Cat(){
        std::cout<<"Cat destructor called 'Miaaaaaiuu'"<<std::endl;
    }     

    Cat::Cat(const Cat& other)
{
	std::cout << "Cat copy constructor called! 'Miaaaaaiuu'" << std::endl;
	this->type = other.type;
	
}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called! 'Miaaaaaiuu'" << std::endl;
	if (this != &other)
        this->type = other.type;
	return (*this);
}

	void Cat::makeSound() const{
	std::cout << "Miaaaaouuu UwU" << std::endl;
    };