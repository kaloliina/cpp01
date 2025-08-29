#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i = 0;
	if (N <= 0)
	{
		return (NULL);
	}
	Zombie *zombieHorde;
	zombieHorde = new Zombie[N];
	while (i < N)
	{
		zombieHorde[i].setName(name);
		i++;
	}
	return (zombieHorde);
}
