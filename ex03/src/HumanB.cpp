#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() { }

void HumanB::attack() const
{
	if (weapon != NULL)
		std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
	else
		std::cout << name << " unfortunately does not want to attack without a weapon!" << std::endl;		
}

/*Ok let's see if I understand this correctly, I cannot have reference to an object for HumanB because when HumanB object gets
created, it would immediately need to be referenced to a valid object. And since we don't know when B picks up the object, we cannot do that.
In the main, since the object was already created there, we can then send a reference to that object but in this function we need to take the address
of that object so we can refer to it. This means before the pointer can be set to NULL but after taking the weapon, we have a pointer to the weapon.
And if I didn't use reference nor pointer, but simply used Weapon weapon, that would mean HumanB would have it's own independent copy, a separate weapon
but we want the B to use the weapon that was created in main
*/
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
