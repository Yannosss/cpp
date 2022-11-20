#include "Intern.hpp"

// Constructeur / destructeurs
Intern::Intern(void)
{
	std::cout << "Constructor Default Intern called"<< std::endl;
	this->_form_creation_fct_lst[0] = &Intern::_create_ShrubberyCreationForm;
	this->_form_creation_fct_lst[1] = &Intern::_create_RobotomyRequestForm;
	this->_form_creation_fct_lst[2] = &Intern::_Create_PresidentialPardonForm;
}

Intern::Intern(const Intern& src)
{
	std::cout << "Constructor Bycopy Intern called" << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	std::cout << "Destructor Intern" << std::endl;
}

Intern& Intern::operator=(const Intern& src)
{
	std::cout << "Operator= Intern called" << std::endl;
	//this->_form_creation_fct_lst = src._form_creation_fct_lst;
	return (*this);
}


// fonctions
Form*	Intern::makeForm(std::string formular_name, std::string target)
{
	std::string form_type[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	//Form* _form_creation_fct_lst[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	
	for (int i = 0; i < 3; i++)
	{
		if (formular_name == form_type[i])
		{
			std::cout << "Intern creates " << formular_name << std::endl;
			return((this->*_form_creation_fct_lst[i])(formular_name, target));
		}
	}
	std::cout << "Formulare " << formular_name << " does not exist" << std::endl;


}

Form* Intern::_create_ShrubberyCreationForm(std::string name,std::string target)
{
	Form* new_form = new ShrubberyCreationForm(name, target);
	return (new_form);
}

Form* Intern::_create_RobotomyRequestForm(std::string name,std::string target)
{
	Form* new_form = new RobotomyRequestForm(name, target);
	return (new_form);
}

Form* Intern::_Create_PresidentialPardonForm(std::string name,std::string target)
{
	Form* new_form = new PresidentialPardonForm(name, target);
	return (new_form);
}
