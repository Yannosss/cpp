#include "Bureaucrat.hpp"
#include "Form.hpp"


int main (void)
{
	std::cout << "\x1B[36m ### test ... << ###\x1B[37m" << std::endl;
	Form f1("formA", 20, 15);
	std::cout << f1 << std::endl;

}
