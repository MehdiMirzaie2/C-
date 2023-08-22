#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon{
	private:
		std::string	_type;
	public:
		Weapon(std::string _type);
		~Weapon();

		const std::string getType(void);
		void setType(std::string weapon_type);
};

#endif