#include "Zombie.hpp"

Zombie::Zombie() : _name("NoName"){}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie " << this->_name
	<< " risen from the dead" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Oh My Good! They killed "
	<< this->_name << " BASTARDS!!!" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ... " << std::endl;
}
