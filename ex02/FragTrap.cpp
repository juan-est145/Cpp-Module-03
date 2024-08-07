/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:27:16 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/07 17:15:39 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Fragtrap default constructor has been called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Fragtrap string parameter constructor has been called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy)
{
	std::cout << "Fragtrap copy constructor has been called" << std::endl;
	*this = toCopy;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
	std::cout << "FragTrap copy assigment operator was called" << std::endl;
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_hitPoints = toCopy._hitPoints;
		this->_energyPoints = toCopy._energyPoints;
		this->_attackDamage = toCopy._attackDamage;
	}
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "Fragtrap " << this->_name << " can't attack, it is done for!!!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing "
			  << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		return;
	int lifeLeft = this->_hitPoints - (int)amount;
	this->_hitPoints = lifeLeft < 0 ? 0 : lifeLeft;
	std::cout << "Fragtrap " << this->_name << " takes " << amount << " points of damage"
			  << " which leaves it with " << this->_hitPoints << " hit points!"
			  << std::endl;
	if (this->_hitPoints == 0)
		std::cout << "Fragtrap " << this->_name << " has been brutally killed!!!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0)
	{
		std::cout << "Fragtrap " << this->_name << " can't repair itself, it is done for!!!"
				  << std::endl;
		return;
	}
	this->_hitPoints += (int)amount;
	std::cout << "Fragtrap " << this->_name << " repairs " << amount << " hit points "
			  << "which leaves it with " << this->_hitPoints << " hit points" << std::endl;
	this->_energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << this->_name << " requests a high five!!"<< std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Flagtrap destructor has been called" << std::endl;
}