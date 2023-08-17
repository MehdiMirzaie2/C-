#include "Zombie.hpp"

void	randomChump( std::string name ){
	Zombie *zombie;
	
	zombie = new Zombie;
	zombie = newZombie(name);
	zombie->announce();
	// delete zombie;
	// std::cout<<"deleted "
}
