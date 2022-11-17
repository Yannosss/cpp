#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);

		Bureaucrat(const Bureaucrat& src);
		~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat& src);

		std::string	getName(void) const;
		int			getGrade(void) const;
		void		increment_grade(void);
		void		decrement_grade(void);
	
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
		int			_grade;
		Bureaucrat(void);
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
