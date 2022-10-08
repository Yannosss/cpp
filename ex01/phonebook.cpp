#include <iostream>
#include <iomanip> 
#include <string>

std::string	ft_truncate(std::string str);

class PhoneBook
{
	public:
		PhoneBook();
		void print_phonebook();
		

	private:
	// champ ne doivent pas etre vides
		Contact contac_list[10];

};

class Contact
{
	public:
		Contact();
		void print_contact_one_line();
		void print_contact();


	private:
		// champ ne doivent pas etre vides
		int id;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
};

PhoneBook::PhoneBook()
{

}

void PhoneBook::print_phonebook()
{
	//    cerr << left << setw(3) << "id"
    //     << " | ";
    //cerr << left << setw(6) << "type"
    //     << " | ";
		std::cout << "------------------    PHONEBOOK     -------------------\n";


		std::cout << "-------------------------------------------------------\n";





		std::cout << this->last_name << "\n";
		std::cout << this->nickname << "\n";
		std::cout << this->phone_number << "\n";
		std::cout << this->darkest_secret << "\n";

}


Contact::Contact()
{
	this->id = -1;
	this->first_name = "default_first_name";
	this->last_name = "default_last_name";
	this->nickname = "default_nickname";
	this->phone_number = "default_phone_number";
	this->darkest_secret = "default_darkest_secret";

}

void Contact::print_contact_one_line()
{
		std::cout << std::right << std::setw(10) << ft_truncate(this->first_name) << "|";
		std::cout << std::right << std::setw(10) << ft_truncate(this->last_name) << "|";
		std::cout << std::right << std::setw(10) << ft_truncate(this->nickname) << "|";
		std::cout << std::right << std::setw(10) << ft_truncate(this->phone_number) << "|";
		std::cout << std::right << std::setw(10) << ft_truncate(this->darkest_secret);
		std::cout << "\n";
}

std::string	ft_truncate(std::string str)
{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	else 
		return (str);
}

int	main()
{
	std::string usr_input;
	PhoneBook pb;

	pb.print_phonebook();
	
	while(1)
	{
		//std::cin >> usr_input;
		std::getline(std::cin, usr_input);
		std::cout << usr_input << '\n';
		if (usr_input == "ADDD")
		{
			std::cout << "add asked\n";

		}
		else if (usr_input == "SEARCH")
		{
			std::cout << "search asked\n";

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
