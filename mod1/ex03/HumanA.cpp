#include "HumanA.hpp"

humanA::humanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
	return ;
}

humanA::~humanA(void){
	return ;
}

void	humanA::attack(void){
	std::cout<<this->_name << "attacks with his " << this->_weapon.getType() << std::endl;
}