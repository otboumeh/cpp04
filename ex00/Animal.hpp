#ifndef Animal_HPP
#define Animal_HPP
#include <iostream>
#include <string>

class Animal{
	protected:
	std::string type;

	public:

	Animal();                    
	virtual ~Animal();

	
	Animal(const Animal& other);             
	Animal&	operator=(const Animal &other);
	virtual void makeSound() const;
	void getType() const;
};


#endif