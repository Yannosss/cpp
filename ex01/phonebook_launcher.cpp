#include "phonebook_launcher.h"


std::string	ft_truncate(std::string str)
{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	else 
		return (str);
}

//void ft_add(PhoneBook *my_phonebook)
//{

//}

int	main()
{
	std::string usr_input;
	PhoneBook my_phonebook;
	int id = -1;

	my_phonebook.print_phonebook();
	
	while(1)
	{
		//std::cin >> usr_input;
		std::getline(std::cin, usr_input);
		//std::cout << usr_input << '\n';
		if (usr_input == "ADD")
		{
			std::cout << "add asked\n";

		}
		else if (usr_input == "SEARCH")
		{
			std::cout << "search asked\n";
			my_phonebook.print_phonebook();
			std::cout << "Please choose an index to print\n";
			std::getline(std::cin, usr_input);
			if (usr_input.length() != 1 || usr_input[0] < '0' || usr_input[0] > '9')
			{
				std::cout << "'" << usr_input << "' is not a valid id\n";
			}
			else
				my_phonebook.find_and_print_contact(id);
		}
		else if (usr_input == "EXIT")
		{
			return (0);
		}
		else
			std::cout << "invalid cmd\n";


	}



	std::cout << usr_input;
	return (0);
}
