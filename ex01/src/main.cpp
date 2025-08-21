#include "../include/Zombie.hpp"

/*At times we use . or -> when we call function names
- Dot operator should be used when you have the actual object.
- Arrow operator is used when you have a pointer to an object
THIS NEEDS TEST CASES*/
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
