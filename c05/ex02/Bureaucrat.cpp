#include "Bureaucrat.hpp"

// Constructeur / destructeurs
Bureaucrat::Bureaucrat(void):
_name("no_name"), _grade(150)
{
	std::cout << "Constructor Default Bureaucrat called"<< std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade):
_name(name)
{
	std::cout << "Constructor name/grade Bureaucrat called"<< std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}


Bureaucrat::Bureaucrat(const Bureaucrat& src):
_name(src._name), _grade(src._grade)
{
	std::cout << "Constructor Bycopy Bureaucrat called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Bureaucrat" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	std::cout << "Operator= Bureaucrat called" << std::endl;
	this->_grade = src._grade;
	return (*this);
}

// Surcharge operateur <<
std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", Bureaucrat grade " << rhs.getGrade();
	return (o);
}

// Fonctions
std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increment_grade(void)
{
	if (this->_grade < 2)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement_grade(void)
{
	if (this->_grade > 149)
		throw GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(AForm& formular)
{
	try
	{
		formular.beSigned(*this);
		std::cout << this->getName() << " signed " << formular.get_name() << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << formular.get_name();
		std::cout << " because " << e.what() << std::endl; 
	}

	
}
