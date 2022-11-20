#include "Form.hpp"

// Constructeur / destructeurs
Form::Form(void):
_name("no_name"), _form_signed(false), _min_grade_to_sign(150),
_min_grade_to_exec(150)
{
	std::cout << "Constructor Default Form called"<< std::endl;
}

Form::Form(std::string name, int min_grade_to_sign, int min_grade_to_exec, std::string target):
_name(name), _form_signed(0), _min_grade_to_sign(min_grade_to_sign),
_min_grade_to_exec(min_grade_to_exec), _target(target)
{
	std::cout << "Constructor name/min_grades Form called"<< std::endl;
	if (_min_grade_to_sign < 1 || _min_grade_to_exec < 1)
		throw GradeTooHighException();
	if (_min_grade_to_sign > 150 || _min_grade_to_exec > 150)
		throw GradeTooLowException();
}


Form::Form(const Form& src):
_name(src._name), _form_signed(src._form_signed), _min_grade_to_sign(src._min_grade_to_sign),
_min_grade_to_exec(src._min_grade_to_exec)
{
	std::cout << "Constructor Bycopy Form called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Destructor Form" << std::endl;
}

Form& Form::operator=(const Form& src)
{
	std::cout << "Operator= Form called" << std::endl;
	this->_form_signed = src._form_signed;
	return (*this);
}

// Surcharge operateur <<
std::ostream& operator<<(std::ostream& o, const Form& rhs)
{
	o << "Form : " << rhs.get_name() << " - ";
	o << "Signed : " << rhs.get_form_signed() << " - ";
	o << "Min grade to sign : " << rhs.get_min_grade_to_sign() << " - ";
	o << "Min grade to exec : " << rhs.get_min_grade_to_exec();
	return (o);
}

// get / set
std::string Form::get_name(void) const
{
	return (this->_name);
}
bool Form::get_form_signed(void) const
{
	return (this->_form_signed);
}
int Form::get_min_grade_to_sign(void) const
{
	return (this->_min_grade_to_sign);
}
int Form::get_min_grade_to_exec(void) const
{
	return (this->_min_grade_to_exec);
}
std::string Form::get_target(void) const
{
	return (this->_target);
}

void Form::set_form_signed(bool new_state)
{
	this->_form_signed = new_state;
}


// fonctions
void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_min_grade_to_sign)
		throw GradeTooLowException();
	this->_form_signed = true;
}

// Fonctions
void	Form::execute(Bureaucrat const & executor) const
{
	if (!get_form_signed())
		throw FormNotSignedException();
	if (executor.getGrade() > this->_min_grade_to_sign)
		throw GradeTooLowException();
	this->execute_childform();
}
