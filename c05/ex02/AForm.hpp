#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Bureaucrat.hpp"

class Bureaucrat; 

class AForm
{
	public:
		AForm(void);
		AForm(std::string name, int min_grade_to_sign, int min_grade_to_exec, std::string target);
		AForm(const AForm& src);
		virtual ~AForm(void);
		AForm& operator=(const AForm& src);

		std::string		get_name(void) const;
		bool			get_form_signed(void) const;
		int				get_min_grade_to_sign(void) const;
		int				get_min_grade_to_exec(void) const;
		std::string		get_target(void) const;

		virtual void	execute(Bureaucrat const & executor) = 0;

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
		const std::string	_name;
		bool				_form_signed;
		const int			_min_grade_to_sign;
		const int			_min_grade_to_exec;
		std::string			_target;

};

std::ostream& operator<<(std::ostream& o, const AForm& rhs);

#endif
