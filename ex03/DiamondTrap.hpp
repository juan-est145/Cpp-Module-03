#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &toCopy);
	DiamondTrap &operator=(const DiamondTrap &toCopy);
	using ScavTrap::attack;
	void whoAmI(void);
	~DiamondTrap(void);
};
#endif