#ifndef NUMBER_HPP
# define NUMBER_HPP

# include <iostream>
# include <string>
# include <exception>

class Number
{
	public:
		Number(void);
		Number(const Number& src);
		~Number(void);
		Number& operator=(const Number& src);

	private:
		std::string	_raw_nb;
		//bool		_is_nan;
		//bool		_is_inf;
		//int		_sign;

		bool		_char_non_displayable;
		bool		_int_non_displayanble;

		char		_char_value;
		int			_int_value;
		float		_float_value;
		double		_float_value;
};

std::ostream& operator<<(std::ostream& o, const Number& rhs);

#endif
