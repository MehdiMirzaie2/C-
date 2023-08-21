#include "Zombie.hpp"

Zombie::~Zombie(void){
	std::cout<<"everyone died"<<std::endl;
}

void Zombie::set_name(std::string name){
	this->_name = name;
}

void Zombie::announce(void){
	std::cout<<this->_name<<": BraiiiiiiinnnzzzZ...\n";
}
