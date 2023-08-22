#include "HumanB.hpp"

humanB::humanB(std::string name) : _name(name){
	return ;
}

humanB::~humanB(void){
	return ;
}

void	humanB::attack(void){
	std::cout<<this->_name << "attacks with his " << (*this->_weapon).getType() << std::endl;
}

void	humanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}