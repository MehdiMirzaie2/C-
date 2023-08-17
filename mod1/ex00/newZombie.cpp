#include "Zombie.hpp"

Zombie* newZombie(std::string name){
	Zombie *namedZombie = new Zombie;

	namedZombie->setter(name);
	return namedZombie; 
}
