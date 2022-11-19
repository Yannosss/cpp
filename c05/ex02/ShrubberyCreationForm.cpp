#include "ShrubberyCreationForm.hpp"

// Constructeur / destructeurs
ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout << "Constructor Default ShrubberyCreationForm called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int min_grade_to_sign, 
int min_grade_to_exec, std::string target): 
AForm(name, min_grade_to_sign, min_grade_to_exec, target)
{
	std::cout << "Constructor name/grade ShrubberyCreationForm called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): AForm(src.get_name(), 
src.get_min_grade_to_sign(), src.get_min_grade_to_exec(), src.get_target())
{
	std::cout << "Constructor Bycopy ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	std::cout << "Operator= ShrubberyCreationForm called" << std::endl;
	// faire copie
	return (*this);
}

// Fonctions
//void		ShrubberyCreationForm::exec_form(void)
//{

//}
