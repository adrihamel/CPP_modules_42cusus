#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump( std::string name);

int main (void)
{
	Zombie *zombie[2];
	size_t i;

	std::cout << std::endl;
	std::cout << "|   Stack Zombie   |" << std::endl;
	std::cout << std::endl;
	randomChump("Felipe V");
	randomChump("Juan Carlos I");

	std::cout << std::endl;
	std::cout << "|   Heap Zombie   |" << std::endl;
	std::cout << std::endl;

	zombie[0] = newZombie("Sanchez");
	zombie[0]->announce();
	zombie[1] = newZombie("Rajoy");
	zombie[1]->announce();

	i = -1;
	while (++i < 2)
		delete( zombie[i] );
}
