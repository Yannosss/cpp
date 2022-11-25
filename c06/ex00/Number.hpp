#ifndef NUMBER_HPP
# define NUMBER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <iomanip>
# include <sstream>
# include <bits/stdc++.h>
# include <math.h>

class Number
{
	public:
		Number(void);
		Number(const Number& src);
		~Number(void);
		Number& operator=(const Number& src);

		bool	get_char_non_displayable();
		bool	get_int_non_displayable();
		bool	get_float_non_displayable();
		char	get_char_value();
		int		get_int_value();
		float	get_float_value();
		double	get_double_value();

		void	set_char_non_displayable(bool value);
		void	set_int_non_displayable(bool value);
		void	set_float_non_displayable(bool value);
		void	set_char_value(char value);
		void	set_int_value(int value);
		void	set_float_value(float value);
		void	set_double_value(double value);

		void	print();

	private:
		std::string	_raw_nb;

		bool		_char_non_displayable;
		bool		_int_non_displayable;
		bool		_float_non_displayable;

		char		_char_value;
		int			_int_value;
		float		_float_value;
		double		_double_value;
};

#endif
