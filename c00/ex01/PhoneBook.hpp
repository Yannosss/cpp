#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{
	public:
		PhoneBook();
		void print_phonebook();
		void add_contact();
		int id_is_valid(std::string id);
		void find_and_print_contact(int id);
		void search();

	private:
		int phonebook_full;
		Contact contact_list[9];
};

#endif
