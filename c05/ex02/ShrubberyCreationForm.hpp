#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>

# include "AForm.hpp"

# define SHRUB_MIN_GRADE_TO_SIGN 145
# define SHRUB_MIN_GRADE_TO_EXEC 137 

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(std::string name,std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);

		virtual void	execute_childform() const;

	private:
		ShrubberyCreationForm(void);
};

#endif
