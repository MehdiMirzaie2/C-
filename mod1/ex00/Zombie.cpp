#include "Zombie.hpp"

// void	init_zombie(void){
// 	std::string name;

// 	do{
// 		std::cout<<"Name: ";
// 		std::cin>>name;
// 	}while(name.length() == 0);
// 	randomChump(name);
// }

Zombie::Zombie(void){
	do{
		std::cout<<"Name: ";
		std::cin>>name;
	}while(name.length() == 0);

	randomChump(name);
}
