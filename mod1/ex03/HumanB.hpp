#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "weapon.hpp"
class	humanB{
	Weapon		weapon;
	std::string	name;

	void	attack(void);

	void	setWeapon(std::string _weapon);
	humanB()
}

#endif