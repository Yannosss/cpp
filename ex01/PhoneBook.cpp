#include "phonebook_launcher.h"

PhoneBook::PhoneBook()
{
	phonebook_full = 0;
}

void PhoneBook::print_phonebook()
{
		std::cout << "-------------    PHONEBOOK     ------------\n";
		std::cout << "     index|first name| last name|  nickname\n";
		for(int i = 1; i <= 8; i++)
		{
			this->contact_list[i].print_contact_one_line();
		}
}

// cree un contact en position 0
// puis decale tous les contacts (celui la y compris)
// le 0 n'est jamais affiche, c'est juste un tampon pour le decalage
// a chaque decalage l'id est incremente 
// (contact 1 devient contact 2, contact 2 devient contact 3)
// les id initiaux sont a -1, et ne sont pas decale
void PhoneBook::add_contact()
{
	int	i = 8;

	this->contact_list[0].fill_by_asking();
	while(i >= 1)
	{
		this->contact_list[i].fill_by_copy(&this->contact_list[i - 1]);
		i--;
	}
}

int PhoneBook::id_is_valid(std::string id)
{
	if(id.length() != 1)
		return (0);
	for(int i = 1; i <= 8; i++)
	{
		if(this->contact_list[i].get_id() == int(id[0] - '0'))
			return (1);
	}
	return (0);

}

void PhoneBook::find_and_print_contact(int id)
{
	int contact_found = 0;
	for(int i = 1; i <= 8; i++)
	{
		if(this->contact_list[i].get_id() == id)
		{
			this->contact_list[i].print_contact_detailed();
			contact_found = 1;
		}
	}
	if (!contact_found)
		std::cout<<"Contact not found\n";
}

void PhoneBook::search()
{
	std::string usr_input;

	if (this->contact_list[0].get_id() == -1)
	{
		std::cout << "Phonebook is empty, add contact before\n";
		return ;
	}
	this->print_phonebook();
	std::cout << "Choose an index to print\n";
	std::getline(std::cin, usr_input);
	if (std::cin.eof()==1)
		{
			std::cout << "\nExit asked\n";
			return;
		}
	while (!this->id_is_valid(usr_input))
	{
		std::cout << "'" << usr_input << "' is not valid\n";
		std::cout << "Choose an index to print\n";
		std::getline(std::cin, usr_input);
		if (std::cin.eof()==1)
		{
			std::cout << "\nExit asked\n";
			return;
		}
	}
	this->find_and_print_contact(int(usr_input[0] - '0'));
}
