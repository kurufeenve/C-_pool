#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <sys/time.h>

class	ClapTrap
{
	private:
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergypoints;
		int			_level;
		std::string	_name;
		int			_meleeAttackDamage;
		int			_rangeAttackDamage;
		int			_armorDamageReduction;
		int			_trueDmg;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &f2);
		virtual ~ClapTrap();
		ClapTrap &operator= (const ClapTrap &frag);
		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		int			getHitPoints() const;
		int			getMaxHitPoints() const;
		int			getEnergyPoints() const;
		int			getMaxEnergypoints() const;
		int			getLevel() const;
		std::string	getName() const;
		int			getMeleeAttackDamage() const;
		int			getRangeAttackDamage() const;
		int			getArmorDamageReduction() const;
};

#endif