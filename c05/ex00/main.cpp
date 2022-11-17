#include "Bureaucrat.hpp"

int main (void)
{
	std::cout << "\x1B[36m ### test constructeur toohigh ###\x1B[37m" << std::endl;
	try
	{	
		Bureaucrat bureaucrat1("Tom", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\x1B[36m ### test constructeur toolow ###\x1B[37m" << std::endl;
	try
	{	
		Bureaucrat bureaucrat2("Tom", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\x1B[36m ### test constructeur ok ###\x1B[37m" << std::endl;
	try
	{	
		Bureaucrat bureaucrat3("Tom", 1);
		Bureaucrat bureaucrat4("Tom", 150);
		std::cout << "Pas d'exception ici" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\x1B[36m ### test increment ###\x1B[37m" << std::endl;
	try
	{	
		Bureaucrat bureaucrat5("Tom", 2);
		bureaucrat5.increment_grade();
		std::cout << "grade apres increment: " << bureaucrat5.getGrade() << std::endl;
		bureaucrat5.increment_grade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\x1B[36m ### test decrement ###\x1B[37m" << std::endl;
	try
	{	
		Bureaucrat bureaucrat6("Tom", 149);
		bureaucrat6.decrement_grade();
		std::cout << "grade apres decrement: " << bureaucrat6.getGrade() << std::endl;
		bureaucrat6.decrement_grade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\x1B[36m ### test surcharge << ###\x1B[37m" << std::endl;
	Bureaucrat bureaucrat7("Tom", 42);
	std::cerr << bureaucrat7 << std::endl;

		std::cout << "\x1B[36m ### test copy et = << ###\x1B[37m" << std::endl;
	Bureaucrat bureaucrat8("Tom", 42);
	std::cerr << bureaucrat7 << std::endl;
	Bureaucrat bureaucrat9(bureaucrat8);
	std::cerr << bureaucrat9 << std::endl;
	Bureaucrat bureaucrat10("Bob", 24);;
	bureaucrat10 = bureaucrat9;
	std::cerr << bureaucrat10 << std::endl;
}
