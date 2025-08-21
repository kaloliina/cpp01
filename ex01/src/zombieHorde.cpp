#include "../include/Zombie.hpp"

/*Should we announce them here or in main?
Also right now I'm basically constructing these twice
because I use the constructor to set name for the zombies,
maybe better approach would be to have a setter function?*/
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
		zombieHorde[i] = Zombie(name);
		i++;
	}
	return (zombieHorde);
}
