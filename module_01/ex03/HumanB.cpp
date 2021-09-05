#include "HumanB.hpp"

HumanB::HumanB()
{
    this->_name = "NoName";
}

HumanB::HumanB(std::string name) 
{
    this->_name = name;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    std::cout << this->_name <<" attacks with his " 
    << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
