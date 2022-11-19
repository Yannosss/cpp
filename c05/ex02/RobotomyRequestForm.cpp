#include "RobotomyRequestForm.hpp"

// Constructeur / destructeurs
RobotomyRequestForm::RobotomyRequestForm(void):
AForm("default_name", ROB_MIN_GRADE_TO_SIGN, ROB_MIN_GRADE_TO_EXEC, "default_target")
{
	std::cout << "Constructor Default RobotomyRequestForm called"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target): 
AForm(name, ROB_MIN_GRADE_TO_SIGN, ROB_MIN_GRADE_TO_EXEC, target)
{
	std::cout << "Constructor name/grade RobotomyRequestForm called"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): AForm(src.get_name(), 
src.get_min_grade_to_sign(), src.get_min_grade_to_exec(), src.get_target())
{
	std::cout << "Constructor Bycopy RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	std::cout << "Operator= RobotomyRequestForm called" << std::endl;
	this->set_form_signed(src.get_form_signed());
	return (*this);
}

// Fonctions
void	RobotomyRequestForm::execute_childform() const
{
	std::cout << "brrrrrr..rr.rrrrr" << std::endl; 
	int random = rand(); // seed initialisee dans main
	if (random % 2)
	{
		std::cout << this->get_target() << "has been robotised" << std::endl; 
	}
	else
	{
		std::cout << "Robotisation of " << this->get_target() << " has failed" << std::endl; 
	}
}

