#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB{
	private:
    		std::string _name;   
    		Weapon *_weapon;
	public:
   	 	HumanB();
    		HumanB(std::string name);
    		~HumanB();

    		void attack();
    		void setWeapon(Weapon& weapon);
};

#endif 