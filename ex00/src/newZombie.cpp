#include "../include/Zombie.hpp"

/*I understood from the brief that zombies must announce themselves
but with randomChump, it's explicitly mentioned that they must announce themselves
in the function whileas here it wasn't..? So keep here?*/
Zombie* newZombie(std::string name)
{
    Zombie *newZombie;
    newZombie = new Zombie(name);
    newZombie->announce();
    return (newZombie);
}