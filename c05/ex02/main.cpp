#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# include <cstdlib>


int main (void)
{

	std::cout << "\x1B[36m ### test ShrubberyCreationForm << ###\x1B[37m" << std::endl;
	try
	{
		ShrubberyCreationForm f_shf1("form", "forest");
		Bureaucrat b1("Tom", 1);
		b1.signForm(f_shf1);
		f_shf1.execute(b1);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		std::cout << "\x1B[36m ### test RobotomyRequestForm << ###\x1B[37m" << std::endl;
	srand((unsigned) time(NULL)); // pour generation nb aleatoire dans RobotomyRequestForm::execute_childform()
	try
	{
		RobotomyRequestForm f_shf1("form", "42school");
		Bureaucrat b1("Tom", 1);
		b1.signForm(f_shf1);
		f_shf1.execute(b1);
		f_shf1.execute(b1);
		f_shf1.execute(b1);
		f_shf1.execute(b1);
		f_shf1.execute(b1);
		f_shf1.execute(b1);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\x1B[36m ### test PresidentialPardonForm << ###\x1B[37m" << std::endl;
	try
	{
		PresidentialPardonForm f_shf1("form", "Tonton Xavier");
		Bureaucrat b1("Tom", 1);
		b1.signForm(f_shf1);
		f_shf1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

