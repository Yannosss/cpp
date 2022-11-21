#include "Intern.hpp"



// Constructeur / destructeurs
Intern::Intern(void)
{
	std::cout << "Constructor Default Intern called"<< std::endl;
}

Intern::Intern(const Intern& src)
{
	(void)src;
	std::cout << "Constructor Bycopy Intern called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Destructor Intern" << std::endl;
}

Intern& Intern::operator=(const Intern& src)
{
	(void)src;
	std::cout << "Operator= Intern called" << std::endl;
	return (*this);
}


// fonctions
// fonction creation
Form* Intern::_create_ShrubberyCreationForm(std::string target)
{
	Form* new_form = new ShrubberyCreationForm("ShrubberyCreationFormame", target);
	return (new_form);
}

Form* Intern::_create_RobotomyRequestForm(std::string target)
{
	Form* new_form = new RobotomyRequestForm("RobotomyRequestForm", target);
	return (new_form);
}

Form* Intern::_Create_PresidentialPardonForm(std::string target)
{
	Form* new_form = new PresidentialPardonForm("PresidentialPardonForm", target);
	return (new_form);
}


Form*	Intern::makeForm(std::string formular_name, std::string target)
{
	Form* form_returned = NULL;
	std::string form_type[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form* (Intern::*functptr[3])(std::string target);
	functptr[0] = &Intern::_create_ShrubberyCreationForm;
	functptr[1] = &Intern::_create_RobotomyRequestForm;
	functptr[2] = &Intern::_Create_PresidentialPardonForm;
	
	for (int i = 0; i < 3; i++)
	{
		if (formular_name == form_type[i])
		{
			form_returned = (this->*functptr[i])(target);
			std::cout << "Intern creates " << formular_name << std::endl;
			return(form_returned);
		}
	}
	std::cout << "Formulare " << formular_name << " does not exist" << std::endl;
	return (NULL);

}
