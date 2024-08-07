/* ************************** constructor for Diamondtrap was called"************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:50:05 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/07 18:29:41 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor has been called" << std::endl;
	this->_name = "No name";
	this->ClapTrap::_name += "_clap_name";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap name parameter constructor has been called" << std::endl;
	this->_name = name;
	this->ClapTrap::_name += "_clap_name";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy), ScavTrap(toCopy), FragTrap(toCopy)
{
	std::cout << "DiamondTrap copy constructor has been called" << std::endl;
	*this = toCopy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy)
{
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->ClapTrap::_name = toCopy.ClapTrap::_name;
		this->_hitPoints = toCopy._hitPoints;
		this->_energyPoints = toCopy._energyPoints;
		this->_attackDamage = toCopy._attackDamage;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and my old ClapTrap name is "
			  << this->ClapTrap::_name << std::endl;
}