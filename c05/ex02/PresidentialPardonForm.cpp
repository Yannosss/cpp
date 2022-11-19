#include "PresidentialPardonForm.hpp"

// Constructeur / destructeurs
PresidentialPardonForm::PresidentialPardonForm(void):
AForm("default_name", PRES_MIN_GRADE_TO_SIGN, PRES_MIN_GRADE_TO_EXEC, "default_target")
{
	std::cout << "Constructor Default PresidentialPardonForm called"<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target): 
AForm(name, PRES_MIN_GRADE_TO_SIGN, PRES_MIN_GRADE_TO_EXEC, target)
{
	std::cout << "Constructor name/grade PresidentialPardonForm called"<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src): AForm(src.get_name(), 
src.get_min_grade_to_sign(), src.get_min_grade_to_exec(), src.get_target())
{
	std::cout << "Constructor Bycopy PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Destructor PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	std::cout << "Operator= PresidentialPardonForm called" << std::endl;
	this->set_form_signed(src.get_form_signed());
	return (*this);
}

// Fonctions
void	PresidentialPardonForm::execute_childform() const
{
	std::cout << this->get_target() << " has been forgiven by Zaphod Beeblebrox " << std::endl; 
}

