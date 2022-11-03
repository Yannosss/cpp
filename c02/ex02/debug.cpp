// a mettre dans la classe
void print_rawbits_binary();


void Fixed::print_rawbits_binary()
{
	
	long nb = this->_RawBits;
	int divisor_pow = sizeof(int) * 8 - 2;
	int round = sizeof(int) * 8 - 1;
	std::cout << "### Print rawbits in binary ###" << std::endl;

	if (nb < 0)
	{
		std::cout << "(1) ";
		nb = nb + 2147483648;
	}	
	else
		std::cout << "(0) ";	

	while (round > 0)
	{
		if (round % 8 == 0)
			std::cout << "- ";	

		if (nb/ (int)pow(2.0, divisor_pow) > 0)
		{
			std::cout << "1 ";
			nb = nb - (int)pow(2.0, divisor_pow);
		}
		else
		{
			std::cout << "0 ";	
		}
		//std::cout << "(" << divisor_pow << ")";	

		

		divisor_pow--;
		round--;

	}
	std::cout << std::endl;
}
