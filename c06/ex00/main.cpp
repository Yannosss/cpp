#include "main.hpp"

int main(int argc, char **argv)
{
	//float a = 11000.0f;
	//double inf = std::numeric_limits<double>::infinity();
	//std::cout << (int)a << std::endl;
	std::string arg;
	std::string arg_to_check;
	Number number;


	if (argc != 2)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return(1);
	}
	arg = argv[1];
	if (arg.length() == 1 && std::isdigit(arg.at(0)) && std::isprint(arg.at(0)))
	{
		conv_from_char(&number, arg);
		return(0);
	}
	if (arg == "nan" || arg == "nanf")
	{
		not_a_number_case();
	}
	if (arg == "-inff" || arg == "+inff")
	{
		conv_from_float(&number, arg);
		return(0);
	}
	if (arg == "-inf" || arg == "+inf")
	{
		conv_from_double(&number, arg);
		return(0);
	}
	// check si signe -
	if (arg.at(0) == '-')
	{
		arg_to_check = &((argv[1])[1]); // omission du 1er caractere '-'
	}
	else
	{
		arg_to_check = arg;
	}
	std::cout << "-- CHECK 1" << std::endl;

	// test si uniquement des chiffres
	if (is_digits(arg_to_check))
	{
	std::cout << "-- CHECK 2" << std::endl;

		conv_from_int(&number, arg);
		return(0);
	}
	// test si autre chose que 'chiffre', 'f', '.'
	if (!is_digits_dot_f(arg_to_check))
	{
		//conv_from_double(&number, "nan");
		not_a_number_case();
		return(0);
	}
	// test si 'f' ailleurs qu'a la fin
	if (arg_to_check.find('f') < arg_to_check.length() - 1)
	{
		//conv_from_double(&number, "nan");
		not_a_number_case();
		return(0);
	}
	// test si plus d'une virgule
	if (count(arg_to_check.begin(), arg_to_check.end(), '.') > 1)
	{
		//conv_from_double(&number, "nan");
		not_a_number_case();
		return(0);
	}
	// test si f a la fin
	if (arg_to_check.find('f') == arg_to_check.length() - 1)
	{
		//conv_from_float(&number, arg);
		not_a_number_case();
		return(0);
	}
	conv_from_double(&number, arg);






}

	// si argv != 2
		// erreur nb arguments
	// si 1 seul char et non digit
		// fonction char
	//si srcmp = -inff +inff nanf
		// fonction float
	//si srcmp = -inf +inf nan
		// fonction double
	// si que des digit
		// fonction int

	// si un 'f' ailleurs qu'a la fin
		// fonction double avec 'nan' en parametre
	// si f a la fin et pas de '.'
		// fonction double avec 'nan' en parametre

	// si plusieur '.'
		// fonction double avec 'nan' en parametre

	// si '.' present
		// si 'f' a la fin
			// fonction float
		// sinon
			// fonction double

	// pour tous les aures cas 
		// fonction double avec 'nan' en parametre
