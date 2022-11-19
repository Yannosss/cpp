#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include <cstdlib>

# include "AForm.hpp"

# define ROB_MIN_GRADE_TO_SIGN 72
# define ROB_MIN_GRADE_TO_EXEC 45 

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(std::string name,std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& src);

		virtual void	execute_childform() const;

	private:
		RobotomyRequestForm(void);
};

#endif
