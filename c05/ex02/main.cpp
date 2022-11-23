#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main (void)
{
	std::cout << "\x1B[36m ### test ShrubberyCreationForm ###\x1B[37m" << std::endl;
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
	std::cout << "\x1B[36m --- \x1B[37m" << std::endl;
	{
		ShrubberyCreationForm f_shf1("form", "forest");
		Bureaucrat b146("Tom", 146);
		b146.signForm(f_shf1);
		b146.executeForm(f_shf1);
	}

		std::cout << "\x1B[36m ### test RobotomyRequestForm ###\x1B[37m" << std::endl;
	try
	{
		RobotomyRequestForm f_shf1("form", "42school");
		Bureaucrat b1("Tom", 1);
		b1.signForm(f_shf1);
		b1.executeForm(f_shf1);
		b1.executeForm(f_shf1);
		b1.executeForm(f_shf1);
		b1.executeForm(f_shf1);
		b1.executeForm(f_shf1);
		b1.executeForm(f_shf1);

		std::cout << "\x1B[36m --- \x1B[37m" << std::endl;
		Bureaucrat b138("Toby", 138);
		f_shf1.execute(b138);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\x1B[36m ### test PresidentialPardonForm ###\x1B[37m" << std::endl;
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

	std::cout << "\x1B[36m ### test Bureaucrat.executeForm() ###\x1B[37m" << std::endl;
	Bureaucrat b1("Tom", 1);
	Bureaucrat b2("Toby", 150);

	PresidentialPardonForm f_shf1("form", "Tonton Xavier");
	b1.executeForm(f_shf1);
	b1.signForm(f_shf1);
	b1.executeForm(f_shf1);
	b2.executeForm(f_shf1);
}

