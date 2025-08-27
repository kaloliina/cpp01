#include "../include/Zombie.hpp"

/*THIS NEEDS TEST CASES
and perhaps error messages if zombies dont have names or are less than 1*/
int main(void)
{
	int i = 0;
	int nbr_zombies = 6;
	Zombie *Zombie = zombieHorde(nbr_zombies, "Karoliina");
	if (Zombie == NULL)
		return (1);
	while (i < nbr_zombies)
	{
		Zombie[i].announce();
		i++;
	}
	delete[] Zombie;
	return (0);
}
