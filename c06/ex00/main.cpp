#include <iostream>
#include <string>
#include <limits>

int main(int argc, char **argv)
{
	float a = 110000f;
	double inf = std::numeric_limits<double>::infinity();
	std::cout << (int)a << std::endl;

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
}
