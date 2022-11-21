#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main (void)
{
	std::cout << "\x1B[36m ### test main sujet << ###\x1B[37m" << std::endl;
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	}

	std::cout << "\x1B[36m ### test Shrubbery Creation << ###\x1B[37m" << std::endl;
	Bureaucrat b1("Tom", 1);
	Intern intern;
	Form* formular = intern.makeForm("shrubbery creation", "target_name");
	if (!formular)
	{
		std::cout << "Erreur formular = NULL" << std::endl;
		return (0);
	}

	b1.executeForm(*formular);
	b1.signForm(*formular);
	b1.executeForm(*formular);

	return (0);

	// ajout test autres formulaires

}

