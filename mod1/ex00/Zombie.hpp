# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	private:
		std::string name;
	public:

		Zombie(void);

		void setter(const std::string& newName){
			name = newName;
		}
		void announce(void){
			std::cout<<name<<": "<<"BraiiiiiiinnnzzzZ..."<<std::endl;
		}
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
void	init_zombie(void);

#endif