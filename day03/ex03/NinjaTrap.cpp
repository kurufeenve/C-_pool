#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _hitPoints(60), _maxHitPoints(60), _energyPoints(120), _maxEnergypoints(120),
_level(1), _name("FR4G-TP assault robot"), _meleeAttackDamage(60), _rangeAttackDamage(5),
_armorDamageReduction(0)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(60), _maxHitPoints(60), _energyPoints(120), _maxEnergypoints(120),
_level(1), _name(name), _meleeAttackDamage(60), _rangeAttackDamage(5),
_armorDamageReduction(0)
{
	std::cout << "ScavTrap string constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &f2)
{
	*this = f2;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &frag)
{
	if (this != &frag)
	{
		this->_hitPoints = frag.getHitPoints();
		this->_maxHitPoints = frag.getMaxHitPoints();
		this->_energyPoints = frag.getEnergyPoints();
		this->_maxEnergypoints = frag.getMaxEnergypoints();
		this->_level = frag.getLevel();
		this->_name = frag.getName();
		this->_meleeAttackDamage = frag.getMeleeAttackDamage();
		this->_rangeAttackDamage = frag.getRangeAttackDamage();
		this->_armorDamageReduction = frag.getArmorDamageReduction();
	}
	std::cout << "ScavTrap copied" << std::endl;
	return *this;
}

int			ScavTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int			ScavTrap::getMaxHitPoints() const
{
	return this->_maxHitPoints;
}

int			ScavTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

int			ScavTrap::getMaxEnergypoints() const
{
	return this->_maxEnergypoints;
}

int			ScavTrap::getLevel() const
{
	return this->_level;
}

std::string	ScavTrap::getName() const
{
	return this->_name;
}

int			ScavTrap::getMeleeAttackDamage() const
{
	return this->_meleeAttackDamage;
}

int			ScavTrap::getRangeAttackDamage() const
{
	return this->_rangeAttackDamage;
}

int			ScavTrap::getArmorDamageReduction() const
{
	return this->_armorDamageReduction;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::string	tgt;
	tgt = target;
	if (target.length() == 0)
		tgt = "Unnown Enemy";
	std::cout << "ScavTrap '" + this->_name + "' attacks '" + tgt + "' causing " <<
	this->_meleeAttackDamage << " points of damage!\n" << std::endl;
}

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::string	tgt;
	tgt = target;
	if (target.length() == 0)
		tgt = "Unnown Enemy";
	std::cout << "ScavTrap '" + this->_name + "' attacks '" + tgt + "' at range, causing " <<
	this->_rangeAttackDamage << " points of damage!\n" << std::endl;
}

void		ScavTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < this->_armorDamageReduction)
		this->_trueDmg = 0;
	else
	{
		this->_trueDmg = amount - this->_armorDamageReduction;
		std::cout << "'" + this->_name + "' was damaged by " << this->_trueDmg << " points.\n" << std::endl;
	}
	if (this->_hitPoints < this->_trueDmg)
	{
		std::cout << "'" + this->_name + "' is not functioning! repairs needed!\n" << std::endl;
		this->_hitPoints = 0;
	}
	else
		this->_hitPoints -= this->_trueDmg;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap '" << this->_name + "' was repaired for " << amount << " points.\n" << std::endl;
	if ((this->_hitPoints = this->_hitPoints + amount) > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "I am ready to go!\n" << std::endl;
}