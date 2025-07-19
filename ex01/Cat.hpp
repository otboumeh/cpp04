#ifndef Cat_HPP
#define Cat_HPP
#include "Animal.hpp"
class Cat : public Animal{
	private:
		
	public:

	Cat();                    
	~Cat();

	
	Cat(const Cat& other);             
	Cat&	operator=(const Cat &other);
    virtual void makeSound() const;


};


#endif