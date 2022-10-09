#include "phonebook_launcher.h"

PhoneBook::PhoneBook()
{
	phonebook_full = 0;
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

		for(int i = 0; i < 8; i++)
		{
			this->contact_list[i].print_contact_one_line();
		}

		std::cout << "-------------------------------------------\n";
		//std::cout << this->last_name << "\n";
		//std::cout << this->nickname << "\n";
		//std::cout << this->phone_number << "\n";
		//std::cout << this->darkest_secret << "\n";
}

// decale touts les contacts vers le bas et remplace le 1er par un new
void PhoneBook::translate_contacts()
{
	//int	i = 9;
	//while(i >= 1)
	//{
	//	this->contact_list[i].fill_by_copy(&this->contact_list[i - 1]);
	//	i--;
	//}
	//this->contact_list[0].fill_by_asking();

}

void PhoneBook::add_contact()
{
	int	i = 7;

	//ajouter un return de validite 
	//incr taille rep de 1 pour tampon et changer affichage a parrtir de 1 et pas 0
	this->contact_list[0].fill_by_asking();
	// faire permutation si retour valid
	while(i >= 1)
	{
		this->contact_list[i].fill_by_copy(&this->contact_list[i - 1]);
		i--;
	}
	// fill que si les data sont bonnes (paas vide)

	//if (!this->phonebook_full)
	//{
	//	while(this->contact_list[i].get_id() != -1)
	//		i++;
	//	if (i == 9)
	//	{
	//		this->phonebook_full = 1;
	//		this->contact_list[i].fill_by_asking();
	//	}
	//}
	//else
	//{
	//	while(this->contact_list[i].get_id != 0)
	//		i++;
	//}


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
