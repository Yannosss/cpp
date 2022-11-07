#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

#define BIN_POINT_POSITION 8

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(const int nb);
		Fixed(const float nb);
		~Fixed(void);

		Fixed& operator=(Fixed const & src);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int get_binary_point_position(void) const;

		float toFloat(void) const;
		int toInt(void) const;


	private:
		int			_RawBits;
		static const int	_binary_point_position = BIN_POINT_POSITION;



};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


#endif
