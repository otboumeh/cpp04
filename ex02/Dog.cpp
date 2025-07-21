#include "Dog.hpp"

Dog::Dog(){
    type = "dog";
    std::cout<<"dog constructor called 'Wooof' "<<std::endl;
    dog_brain = new Brain();
}

Dog::~Dog(){
    std::cout<<"dog destructor called 'Wooof'"<<std::endl;
    delete this->dog_brain;
}     

Dog::Dog(const Dog& other)
{
    this->dog_brain = new Brain(*other.dog_brain);
    this->type = other.type;
    std::cout << "Dog copy constructor called" << std::endl;

}

Dog&	Dog::operator=(const Dog &other)
{
std::cout << "dog copy assignment operator called! 'Wooof'" << std::endl;
if (this != &other) {
    this->type = other.type;
    if (this->dog_brain)
        delete this->dog_brain;

    this->dog_brain = new Brain(*other.dog_brain);
}
return (*this);
}
	void Dog::makeSound() const{
	std::cout << "Wooof woof" << std::endl;
    };
