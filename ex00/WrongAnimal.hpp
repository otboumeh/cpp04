#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP
#include <iostream>
#include <string>

class WrongAnimal{
	protected:
	std::string type;

	public:

	WrongAnimal();                    
	virtual ~WrongAnimal();

	
	WrongAnimal(const WrongAnimal& other);             
	WrongAnimal&	operator=(const WrongAnimal &other);
	virtual void makeSound() const;
	const std::string& getType() const;
};


#endif