#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "phonebook_launcher.h"

class PhoneBook
{
	public:
		PhoneBook();
		void print_phonebook();
		void translate_contacts();
		void add_contact();
		void find_and_print_contact(int id);

		

	private:
	// champ ne doivent pas etre vides
		int phonebook_full;
		Contact contact_list[8];

};

#endif
