#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "phonebook_launcher.h"

class Contact
{
	public:
		Contact();
		void print_contact_one_line();
		void print_contact_detailed();
		void print_contact();
		int get_id();


	private:
		// champ ne doivent pas etre vides
		int id;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
};

#endif
