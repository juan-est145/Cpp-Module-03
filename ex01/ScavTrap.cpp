/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:55:52 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/07 16:00:55 by juestrel         ###   ########.fr       */
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

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		return;
	int lifeLeft = this->_hitPoints - (int)amount;
	this->_hitPoints = lifeLeft < 0 ? 0 : lifeLeft;
	std::cout << "Scavtrap " << this->_name << " takes " << amount << " points of damage"
			  << " which leaves it with " << this->_hitPoints << " hit points!"
			  << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "Scavtrap " << this->_name << " has been brutally killed!!!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "Scavtrap " << this->_name << " can't repair itself, it is done for"
				  << std::endl;
		return;
	}
	this->_hitPoints += (int)amount;
	std::cout << "Scavtrap " << this->_name << " repairs " << amount << " hit points "
			  << "which leaves it with " << this->_hitPoints << " hit points" << std::endl;
	this->_energyPoints--;
}

void ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap " << this->_name << " is in Gate keeper mode" << std::endl;
}