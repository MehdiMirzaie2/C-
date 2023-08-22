#include "weapon.hpp"

Weapon::Weapon(std::string weapon_type){
	this->setType(weapon_type);
}

Weapon::~Weapon(void){
	return ;
}

std::string const	Weapon::getType(void){
	return (this->_type);
}

void	Weapon::setType(std::string weapon_type){
	this->_type = weapon_type;
}
