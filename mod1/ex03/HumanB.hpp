#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "weapon.hpp"
#include <iostream>

class	humanB{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		humanB(std::string name);
		~humanB();

		void	attack(void);
		void	setWeapon(Weapon &weapon);
};

#endif