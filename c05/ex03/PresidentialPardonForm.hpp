#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>

# include "Form.hpp"

# define PRES_MIN_GRADE_TO_SIGN 25
# define PRES_MIN_GRADE_TO_EXEC 5 

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(std::string name,std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& src);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& src);

	protected:
		virtual void	execute_childform() const;

	private:
		PresidentialPardonForm(void);
};

#endif
