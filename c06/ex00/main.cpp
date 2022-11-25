#include "main.hpp"

int main(int argc, char **argv)
{
	std::string arg;
	std::string arg_to_check;
	Number number;


	if (argc != 2)
	{
		std::cout << "Wrong number of arguments (1 required)" << std::endl;
		return(1);
	}
	arg = argv[1];
	if (arg.length() == 1 && !std::isdigit(arg.at(0)) && std::isprint(arg.at(0)))
	{
		conv_from_char(&number, arg);
		return(0);
	}
	if (arg == "nan" || arg == "nanf")
	{
		print_not_a_number();
	}
	if (arg == "+inff" || arg == "+inf")
	{
		print_positive_inf();
		return(0);
	}
	if (arg == "-inff" || arg == "-inf")
	{
		print_negative_inf();
		return(0);
	}
	// check si signe -
	if (arg.at(0) == '-')
	{
		arg_to_check = &((argv[1])[1]); // omission du 1er caractere '-' pour les check (mais pas dans la string envoyee en conversion)
	}
	else
	{
		arg_to_check = arg;
	}
	// test si uniquement des chiffres
	if (is_digits(arg_to_check))
	{
		conv_from_int(&number, arg);
		return(0);
	}
	// test si autre chose que 'chiffre', 'f', '.'
	if (!is_digits_dot_f(arg_to_check))
	{
		std::cout << "Warning: Input type not recognized - Conversion not possible" << std::endl;
		print_not_a_number();
		return(0);
	}
	// test si 'f' ailleurs qu'a la fin
	if (arg_to_check.find('f') < arg_to_check.length() - 1)
	{
		std::cout << "Warning: Input type not recognized - Conversion not possible" << std::endl;
		print_not_a_number();
		return(0);
	}

	// test si plus d'une virgule
	if (count(arg_to_check.begin(), arg_to_check.end(), '.') > 1)
	{
		std::cout << "Warning: Input type not recognized - Conversion not possible" << std::endl;
		print_not_a_number();
		return(0);
	}
	// test si f a la fin
	if (arg_to_check.find('f') == arg_to_check.length() - 1)
	{
		conv_from_float(&number, arg);
		return(0);
	}
	conv_from_double(&number, arg);
}
