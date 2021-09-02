#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    std::string name;
    std::string number;
    
    int N;
    int i;
    std::cout << "Input zombie name: ";
    std::getline(std::cin, name);
    std::cout << "Input number zombies: ";
    std::cin >> N;
    if (N <= 0)
    {
        std::cout << "N less than 0, sorry :(" << std::endl;
        return (0);
    }
    Zombie* horde = zombieHorde(N, name);
    i = -1;
    while (++i < N)
        horde[i].announce();   
    delete [] horde;
    return (0);
}
