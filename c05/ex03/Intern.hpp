#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"


class Form;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& src);
		~Intern(void);
		Intern& operator=(const Intern& src);

		Form* makeForm(std::string formular_name, std::string target);
		

	private:		
		Form* _create_ShrubberyCreationForm(std::string name,std::string target);
		Form* _create_RobotomyRequestForm(std::string name,std::string target);
		Form* _Create_PresidentialPardonForm(std::string name,std::string target);
		Form* (Intern::*_form_creation_fct_lst[3])(std::string name,std::string target);


};

#endif
