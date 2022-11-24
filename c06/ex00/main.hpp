#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <string>
#include <limits>
#include <ctype.h>
#include <algorithm>
#include "Number.hpp"

bool is_digits(const std::string &str);
bool is_digits_dot_f(const std::string &str);

void	conv_from_char(Number* number, const std::string str);
void	conv_from_int(Number* number, const std::string str);
void	conv_from_float(Number* number, const std::string str);
void	conv_from_double(Number* number, const std::string str);
void	not_a_number_case();

#endif
