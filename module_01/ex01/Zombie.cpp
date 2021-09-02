#include "Zombie.hpp"

Zombie::Zombie() : _name("no_name")
{
    std::cout << "Zombie " << this->_name
    << " risen from the dead" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "Zombie " << this->_name
    << " risen from the dead" << std::endl;
}

Zombie::Zombie(int N, std::string name) : _name(name)
{
    if (N > 0)
    {
    	std::cout << "Zombie " << this->_name
    	<< " risen from the dead" << std::endl;
    }
}

Zombie::~Zombie()
{
    std::cout << "Oh My God! They killed " 
    << this->_name << " BASTARDS!!!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::getName(std::string name)
{
    this->_name = name;
}
