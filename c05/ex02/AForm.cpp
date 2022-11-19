#include "AForm.hpp"

// Constructeur / destructeurs
AForm::AForm(void):
_name("no_name"), _form_signed(false), _min_grade_to_sign(150),
_min_grade_to_exec(150)
{
	std::cout << "Constructor Default AForm called"<< std::endl;
}

AForm::AForm(std::string name, int min_grade_to_sign, int min_grade_to_exec, std::string target):
_name(name), _form_signed(0), _min_grade_to_sign(min_grade_to_sign),
_min_grade_to_exec(min_grade_to_exec), _target(target)
{
	std::cout << "Constructor name/min_grades AForm called"<< std::endl;
	if (_min_grade_to_sign < 1 || _min_grade_to_exec < 1)
		throw GradeTooHighException();
	if (_min_grade_to_sign > 150 || _min_grade_to_exec > 150)
		throw GradeTooLowException();
}


AForm::AForm(const AForm& src):
_name(src._name), _form_signed(src._form_signed), _min_grade_to_sign(src._min_grade_to_sign),
_min_grade_to_exec(src._min_grade_to_exec)
{
	std::cout << "Constructor Bycopy AForm called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "Destructor AForm" << std::endl;
}

AForm& AForm::operator=(const AForm& src)
{
	std::cout << "Operator= AForm called" << std::endl;
	this->_form_signed = src._form_signed;
	return (*this);
}

// Surcharge operateur <<
std::ostream& operator<<(std::ostream& o, const AForm& rhs)
{
	o << "AForm : " << rhs.get_name() << " - ";
	o << "Signed : " << rhs.get_form_signed() << " - ";
	o << "Min grade to sign : " << rhs.get_min_grade_to_sign() << " - ";
	o << "Min grade to exec : " << rhs.get_min_grade_to_exec();
	return (o);
}

// get
std::string AForm::get_name(void) const
{
	return (this->_name);
}
bool AForm::get_form_signed(void) const
{
	return (this->_form_signed);
}
int AForm::get_min_grade_to_sign(void) const
{
	return (this->_min_grade_to_sign);
}
int AForm::get_min_grade_to_exec(void) const
{
	return (this->_min_grade_to_exec);
}
std::string AForm::get_target(void) const
{
	return (this->_target);
}

// fonctions
void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_min_grade_to_sign)
		throw GradeTooLowException();
	this->_form_signed = true;
}
