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
		if (this->id > -10)
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
