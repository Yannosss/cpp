#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
	public:
		Contact();
		void print_contact_one_line();
		void print_contact_detailed();
		void print_contact();
		int get_id();
		void fill_by_copy(Contact *contact_from);
		void fill_by_asking();

	private:
		int id;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
};

#endif
