#include "Cat.hpp"

	Cat::Cat(){
        type = "Cat";
        std::cout<<"Cat constructor called 'Miaaaaaiuu' "<<std::endl;
        cat_brain = new Brain();
    }

    Cat::~Cat(){
        std::cout<<"Cat destructor called 'Miaaaaaiuu'"<<std::endl;
        delete this->cat_brain;
    }     

    Cat::Cat(const Cat& other)
{
	this->cat_brain = new Brain(*other.cat_brain);
    this->type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;

}

Cat&	Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called! 'Miaaaaaiuu'" << std::endl;
	if (this != &other) {
		this->type = other.type;
		if (this->cat_brain)
			delete this->cat_brain;

		this->cat_brain = new Brain(*other.cat_brain);
	}
	return (*this);
}

	void Cat::makeSound() const{
	std::cout << "Miaaaaouuu UwU" << std::endl;
    };
