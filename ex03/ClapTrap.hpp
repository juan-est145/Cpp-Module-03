#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &toCopy);
	ClapTrap &operator=(const ClapTrap &toCopy);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	virtual ~ClapTrap(void);
};
#endif