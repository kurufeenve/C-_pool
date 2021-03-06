#include <iostream>
#include <sys/time.h>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	// inherited parent methods are virtual so when we keep offsprings in pointer array of parent class
	// we cat use offspring specific methods while running array in the cycle
	ClapTrap	clap;
	FragTrap	a = FragTrap("R2D2");
	ScavTrap	b = ScavTrap("Jocker");
	ClapTrap	(*c[]) = {&a, &b};
	NinjaTrap	nin("ninja");	

	a.rangedAttack("bobby");
	a.takeDamage(50);
	a.meleeAttack("bobby");
	b.meleeAttack("Siri");
	for (int i = 0; i < 2; i++)
		c[i]->meleeAttack("tommy");
	a.takeDamage(20);
	a.rageOfGandi("Bobby");
	a.beRepaired(60);
	a.vaulthunter_dot_exe("Bobby");
	a.vaulthunter_dot_exe("Bobby");
	a.vaulthunter_dot_exe("Bobby");
	a.vaulthunter_dot_exe("Bobby");
	a.vaulthunter_dot_exe("Bobby");
	a.vaulthunter_dot_exe("Bobby");
	b.challengeNewcomer("Bobby");
	b.challengeNewcomer("Bobby");
	b.challengeNewcomer("Bobby");
	b.challengeNewcomer("Bobby");
	b.challengeNewcomer("Bobby");
	b.challengeNewcomer("Bobby");
	b.challengeNewcomer("Bobby");
	std::cout << a.getName() << b.getName() << std::endl;
	nin.ninjaShoebox(clap);
	nin.ninjaShoebox(a);
	nin.ninjaShoebox(b);
	nin.ninjaShoebox(nin);
	return (0);
}