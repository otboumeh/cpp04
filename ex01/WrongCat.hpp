#ifndef WrongCat_HPP
#define WrongCat_HPP
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal{

	public:

	WrongCat();                    
	~WrongCat();

	
	WrongCat(const WrongCat& other);             
	WrongCat&	operator=(const WrongCat &other);
    virtual void makeSound() const;


};


#endif