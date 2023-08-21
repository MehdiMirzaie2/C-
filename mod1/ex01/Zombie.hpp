# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
	public:

		void set_name(std::string name);

		void announce(void);
		
		// Zombie(void);
		// Zombie(std::string name);
		~Zombie(void);

	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif