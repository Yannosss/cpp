#ifndef HARL_HPP
# define HARL_HPP
# include <string>
# include <iomanip>
# include <iostream>

class Harl
{
	public:
		Harl(void);
		void complain(std::string level);

	private:
		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
		void (Harl::*_harl_fct_lst[4])(void);
};

#endif
