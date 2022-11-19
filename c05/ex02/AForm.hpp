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
		void			set_form_signed(bool new_state);


		void	beSigned(Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const;
		virtual void	execute_childform() const = 0;


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
		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Formular is not signed");
				}
		};

	private:
		const std::string	_name;
		bool				_form_signed;
		const int			_min_grade_to_sign;
		const int			_min_grade_to_exec;
		const std::string	_target;

};

std::ostream& operator<<(std::ostream& o, const AForm& rhs);

#endif
