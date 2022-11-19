#include "Bureaucrat.hpp"
#include "Form.hpp"


int main (void)
{
	std::cout << "\x1B[36m ### test creation Formular << ###\x1B[37m" << std::endl;
	try
	{
		Form f151("f151", 20, 151);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form f151b("f151", 151, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	try
	{
		Form f0("f0", 0, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	try
	{
		Form f0b("f0", 20, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	try
	{
		Form f150("f150", 150, 150);
		Form f1("f1", 1, 1);
		std::cerr << "pas d'exception : ok" << '\n';


	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
	



	std::cout << "\x1B[36m ### test Formular.beSigned() << ###\x1B[37m" << std::endl;
	Bureaucrat b20("b20", 20);
	Form f19("f19", 19, 15);
	Form f20("f20", 20, 15);
	Form f21("f21", 21, 15);

	std::cout << f19 << std::endl;
	std::cout << f20 << std::endl;
	std::cout << f21 << std::endl;

	try
	{
		f21.beSigned(b20);
		f20.beSigned(b20);
		f19.beSigned(b20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << f21 << std::endl;
	std::cout << f20 << std::endl;
	std::cout << f19 << std::endl;
	
	std::cout << "\x1B[36m ### test Bureaucrat.signForm() << ###\x1B[37m" << std::endl;
	Bureaucrat b30("b30", 30);
	Form f29("f29", 29, 15);
	Form f30("f30", 30, 15);
	Form f31("f31", 31, 15);

	b30.signForm(f31);
	b30.signForm(f30);
	b30.signForm(f29);


	

}
