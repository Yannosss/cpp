#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>

# include "Form.hpp"

# define SHRUB_MIN_GRADE_TO_SIGN 145
# define SHRUB_MIN_GRADE_TO_EXEC 137 

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm(std::string name,std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);

	protected:
		virtual void	execute_childform() const;

	private:
		ShrubberyCreationForm(void);
};

#endif
