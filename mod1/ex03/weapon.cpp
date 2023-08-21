#include "weapon.hpp"

const std::string &Weapon::getType(void){
	return (&type);
}

void Weapon::setType(std::string _type){
	this->type = _type;
}
