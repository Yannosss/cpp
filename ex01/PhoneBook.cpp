#include "phonebook_launcher.h"

PhoneBook::PhoneBook()
{

}
void PhoneBook::print_phonebook()
{
	//    cerr << left << setw(3) << "id"
    //     << " | ";
    //cerr << left << setw(6) << "type"
    //     << " | ";
		std::cout << "-------------    PHONEBOOK     ------------\n";
		std::cout << "       id |first name| last name| nickname \n";
		std::cout << "-------------------------------------------\n";

		for(int i = 0; i < 10; i++)
		{
			this->contact_list[i].print_contact_one_line();
		}

		std::cout << "-------------------------------------------\n";
		//std::cout << this->last_name << "\n";
		//std::cout << this->nickname << "\n";
		//std::cout << this->phone_number << "\n";
		//std::cout << this->darkest_secret << "\n";
}


void PhoneBook::add_contact()
{
	std::cout << "Contact creation - Fill the following informations\n";
	



}

void PhoneBook::find_and_print_contact(int id)
{
	int contact_found = 0;
	for(int i = 0; i < 10; i++)
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
