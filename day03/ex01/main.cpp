#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	a = FragTrap("R2D2");
	ScavTrap	b = ScavTrap("Jocker");

	a.rangedAttack("bobby");
	a.takeDamage(50);
	a.meleeAttack("bobby");
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
	return (0);
}