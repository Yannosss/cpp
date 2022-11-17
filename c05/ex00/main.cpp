#include "Bureaucrat.hpp"

int main (void)
{
	try
	{	
		Bureaucrat bureaucrat1("Tom", 0);
	}
	catch (const Bureaucrat::GradeTooHighException)
	{
		std::cout << "GradeTooHighException" << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException)
	{
		std::cout << "GradeTooLowException" << std::endl;
	}

	try
	{	
		Bureaucrat bureaucrat2("Tom", 151);
	}
	catch (const Bureaucrat::GradeTooHighException)
	{
		std::cout << "GradeTooHighException: " << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException)
	{
		std::cout << "GradeTooLowException: " << std::endl;
	}

	try
	{	
		Bureaucrat bureaucrat3("Tom", 1);
		Bureaucrat bureaucrat4("Tom", 150);
		std::cout << "Pas d'exception ici" << std::endl;


	}
	catch (const Bureaucrat::GradeTooHighException)
	{
		std::cout << "Exception GradeTooHighException: " << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException)
	{
		std::cout << "Exception GradeTooLowException: " << std::endl;
	}
}
