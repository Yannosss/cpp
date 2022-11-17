#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);

		Bureaucrat(const Bureaucrat& src);
		virtual ~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat& src);

		std::string getName(void) const;
		int getGrade(void) const;
		void	increment_grade(void);
		void	decrement_grade(void);
	
		class GradeTooHighException{};
		class GradeTooLowException{};

	protected:
		std::string	_name;
		int			_grade;

	private:
		Bureaucrat(void);

};

#endif
