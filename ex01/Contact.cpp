#include "phonebook_launcher.h"

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
		if (this->id > -10) // TBD
		{
			std::cout << std::right << std::setw(10) << this->id << "|";
			std::cout << std::right << std::setw(10) << ft_truncate(this->first_name) << "|";
			std::cout << std::right << std::setw(10) << ft_truncate(this->last_name) << "|";
			std::cout << std::right << std::setw(10) << ft_truncate(this->nickname);
			std::cout << "\n";
		}
}

void Contact::print_contact_detailed()
{
		std::cout << "CONTACT "<< this->id << "\n";
		std::cout << "First name     - ";
		std::cout << std::right << this->first_name << "\n";
		std::cout << "Last name      - ";
		std::cout << std::right << this->last_name << "\n";
		std::cout << "Nickname       - ";
		std::cout << std::right << this->nickname << "\n";
		std::cout << "Phone number   - ";
		std::cout << std::right << this->phone_number << "\n";
		std::cout << "darkest secret - ";
		std::cout << std::right << this->darkest_secret << "\n";
		std::cout << "\n";
}

int Contact::get_id()
{
		return(this->id);
}

void Contact::fill_by_copy(Contact *contact_from)
{
	if (contact_from->id >= 0)
	{
		this->first_name = contact_from->first_name;
		this->last_name = contact_from->last_name;
		this->nickname = contact_from->nickname;
		this->phone_number = contact_from->phone_number;
		this->darkest_secret = contact_from->darkest_secret;
		this->id = contact_from->id + 1;
	}

}

void Contact::fill_by_asking()
{
	//std::string usr_input;
	this->id = 0;
	std::cout << "Contact creation - Fill the following informations\n";
	std::cout << "First name     - ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last name      - ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname       - ";
	std::getline(std::cin, this->nickname);
	std::cout << "Phone number   - ";
	std::getline(std::cin, this->phone_number);
	std::cout << "darkest secret - ";
	std::getline(std::cin, this->darkest_secret);
	std::cout << "\n";

	
}
