/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:55:52 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/07 13:50:04 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor was called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap string parameter constructor was called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

//Test this later with both code inside the brackets and without out
ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy)
{
	std::cout << "ScavTrap copy constructor was called" << std::endl;
	*this = toCopy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy)
{
	std::cout << "ScavTrap copy assigment operator was called" << std::endl;
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_hitPoints = toCopy._hitPoints;
		this->_energyPoints = toCopy._energyPoints;
		this->_attackDamage = toCopy._attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "Scavtrap " << this->_name << " can't attack, it is done for" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
			  << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}