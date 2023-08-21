#include "Zombie.hpp"

Zombie* newZombie(std::string name){
	Zombie *namedZombie = new Zombie;

	namedZombie->set_name(name);
	return namedZombie; 
}
