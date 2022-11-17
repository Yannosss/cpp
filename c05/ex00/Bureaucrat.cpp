#include "Bureaucrat.hpp"

// Constructeur / destructeurs
Bureaucrat::Bureaucrat(void)
{
	std::cout << "Constructor Default Bureaucrat called"<< std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw GradeTooLowException();
	if (grade > 150)
		throw GradeTooHighException();
	this->_name = name;
}


Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	std::cout << "Constructor Bycopy Bureaucrat called" << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor Bureaucrat" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	std::cout << "Operator= Bureaucrat called" << std::endl;
	this->_name = src._name;
	this->_grade = src._grade;
	return (*this);
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
	if (this->_grade > 149)
		throw GradeTooHighException();
	this->_grade++;
}

void	Bureaucrat::decrement_grade(void)
{
	if (this->_grade < 2)
		throw GradeTooHighException();
	this->_grade++;
}
