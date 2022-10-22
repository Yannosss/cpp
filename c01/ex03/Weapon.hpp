#ifndef WEAPON_H
# define WEAPON_H
# include <string>
# include <iostream>


class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string name);
		const std::string&	getType();
		void				setType(std::string type);

	private:
		std::string type;
};

#endif
