#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <string>
#include <limits>
#include <ctype.h>
#include <algorithm>
#include <sstream>
#include <bits/stdc++.h>
# include <math.h>

#include "Number.hpp"

bool is_digits(const std::string &str);
bool is_digits_dot_f(const std::string &str);

void	conv_from_char(Number* number, const std::string str);
void	conv_from_int(Number* number, const std::string str);
void	conv_from_float(Number* number, const std::string str);
void	conv_from_double(Number* number, const std::string str);
void	print_not_a_number();
void	print_impossible();
void	print_positive_inf();
void	print_negative_inf();


#endif
