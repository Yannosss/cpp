#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Bureaucrat.hpp"

class Bureaucrat; 

class Form
{
	public:
		Form(std::string name, int min_grade_to_sign, int min_grade_to_exec);
		Form(const Form& src);
		~Form(void);
		Form& operator=(const Form& src);

		std::string	get_name(void) const;
		bool		get_form_signed(void) const;
		int			get_min_grade_to_sign(void) const;
		int			get_min_grade_to_exec(void) const;

		void	beSigned(Bureaucrat& bureaucrat);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Grade is too high");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Grade is too low");
				}
		};

	private:
		Form(void);
		const std::string	_name;
		bool				_form_signed;
		const int			_min_grade_to_sign;
		const int			_min_grade_to_exec;
};

std::ostream& operator<<(std::ostream& o, const Form& rhs);

#endif
