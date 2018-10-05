#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <sys/time.h>
# include "ClapTrap.hpp"

class	NinjaTrap : public ClapTrap
{

	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &f2);
		virtual ~NinjaTrap();
		NinjaTrap &operator= (const NinjaTrap &frag);
		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(std::string const & target);
		int			getHitPoints() const;
		int			getMaxHitPoints() const;
		int			getEnergyPoints() const;
		int			getMaxEnergypoints() const;
		int			getLevel() const;
		std::string	getName() const;
		int			getMeleeAttackDamage() const;
		int			getRangeAttackDamage() const;
		int			getArmorDamageReduction() const;
		ninjaShoebox() const;
};

#endif