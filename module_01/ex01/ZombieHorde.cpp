#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombieArray = new Zombie[N];
    int i;

    i = -1;
    while (++i < N)
        zombieArray[i].getName(name);
    return (zombieArray);
}
