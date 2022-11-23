#include "Number.hpp"

// Constructeur / destructeurs
Number::Number(void)
{
	std::cout << "Constructor Default Number called"<< std::endl;
}

Number::Number(const Number& src)
{
	std::cout << "Constructor by copy Number called" << std::endl;
}

Number::~Number(void)
{
	std::cout << "Destructor Number" << std::endl;
}

Number& Number::operator=(const Number& src)
{
	std::cout << "Operator= Number called" << std::endl;
	// TBD
	return (*this);
}

// Surcharge operateur <<
std::ostream& operator<<(std::ostream& o, const Number& rhs)
{
	//o << rhs.getName() << " TBD " << rhs.TBD();
	return (o);
}

// Fonctions

