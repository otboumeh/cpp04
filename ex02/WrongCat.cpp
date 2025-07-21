#include "WrongCat.hpp"

	WrongCat::WrongCat(){
        type = "WrongCat";
        std::cout<<"WrongCat constructor called 'Miaaaaaiuu' "<<std::endl;
    }

    WrongCat::~WrongCat(){
        std::cout<<"WrongCat destructor called 'Miaaaaaiuu'"<<std::endl;
    }     

    WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << "WrongCat copy constructor called! 'Miaaaaaiuu'" << std::endl;
	this->type = other.type;
	
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment operator called! 'Miaaaaaiuu'" << std::endl;
	if (this != &other)
        this->type = other.type;
	return (*this);
}

	void WrongCat::makeSound() const{
	std::cout << "Wrong cat Miaaaaouuu UwU" << std::endl;
    };