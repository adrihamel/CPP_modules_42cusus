#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie{
	private:
    		std::string _name;
	public:
    		Zombie();
 	       ~Zombie();
   	 	Zombie(std::string name);
    		Zombie(int N, std::string name);
    
   		 void getName(std::string name);
   		 void announce(void);
};

#endif
