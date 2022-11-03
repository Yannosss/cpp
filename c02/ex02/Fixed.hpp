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

		// ex02 operateur
		bool operator>(const Fixed & src) const;
		bool operator<(const Fixed & src) const;
		bool operator>=(const Fixed & src) const;
		bool operator<=(const Fixed & src) const;
		bool operator==(const Fixed & src) const;
		bool operator!=(const Fixed & src) const;

		Fixed operator+(const Fixed & src) const;
		Fixed operator-(const Fixed & src) const;
		Fixed operator*(const Fixed & src) const;
		Fixed operator/(const Fixed & src) const;

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		// ex02 fct membre static
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);

		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		int get_binary_point_position(void) const;

		float toFloat(void) const;
		int toInt(void) const;

		void print_rawbits_binary();

	private:
		int			_RawBits;
		static const int	_binary_point_position = BIN_POINT_POSITION;



};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);


#endif
