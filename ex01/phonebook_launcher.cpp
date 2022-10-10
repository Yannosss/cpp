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

std::string	ft_getline_not_empty(std::string asked_message)
{
	std::string usr_input;
	std::cout << asked_message;

	std::getline(std::cin, usr_input);
	while (usr_input[0] == '\0')
	{
		std::cout << "Empty field is not allowed\n";
		std::cout << asked_message;
		std::getline(std::cin, usr_input);
	}
	return (usr_input);
}


int	main()
{
	std::string usr_input;
	PhoneBook my_phonebook;
	
	std::cout << "###########################################\n";
	std::cout << "#########    PHONEBOOK PROGRAM    #########\n";
	std::cout << "###########################################\n";
	while(1)
	{
		std::cout << "Choose a command ADD, SEARCH or EXIT\n";
		std::getline(std::cin, usr_input);
		if (usr_input == "ADD")
			my_phonebook.add_contact();
		else if (usr_input == "SEARCH")
			my_phonebook.search();
		else if (usr_input == "EXIT")
			return (0);
		else
			std::cout << "invalid cmd\n";
		std::cout << "-------------------------------------------\n";
	}



	std::cout << usr_input;
	return (0);
}
