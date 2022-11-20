#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main (void)
{
	std::cout << "\x1B[36m ### test intern << ###\x1B[37m" << std::endl;
	RobotomyRequestForm f_shf1("form", "42school");
	Bureaucrat b1("Tom", 1);
	Intern intern;
	Form* formular = intern.makeForm("ShrubberyCreationForm", "target_name");

	return (0);

	
}

