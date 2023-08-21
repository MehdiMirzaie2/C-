#include "Zombie.hpp"

// if we are going in and out of fucntions
// then it is a good idea to dynamically allocate
// else you should you stack

int main(void){
	Zombie *heap;

	heap = newZombie("Heap");
	heap->announce();
	randomChump("stack");

	delete heap;
	return (0);
}