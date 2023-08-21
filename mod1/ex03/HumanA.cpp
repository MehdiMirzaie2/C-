#include "HumanA.hpp"

void	HumanA::attack(void){
	std::cout<<this->name<<"attacks with their"<<this->weapon<<std::endl;
}

HumanA::HumanA(std::string _name, std::string _weapon){
	if (_name.length() == 0){
		do {
			std::cout<<"please provide name: "
			std::cin>>_name;
		} while (_name.length == 0);
	}
	if (_weapon.length() == 0){
		do {
			std::cout<<"please provide weapon: "
			std::cin>>_weapon;
		} while (_weapon.length == 0);
	}
	this->name = _name;
	this->weapon = _weapon;
}