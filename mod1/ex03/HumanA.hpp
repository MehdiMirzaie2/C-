#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "weapon.hpp"
#include <iostream>

class	humanA {
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		humanA(std::string _name, Weapon &weapon);
		~humanA(void);

		void	attack(void);
};

#endif
