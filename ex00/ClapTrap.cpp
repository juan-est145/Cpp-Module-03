/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:55:16 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/06 23:12:28 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor was called" << std::endl;
	this->_name = "No name";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor with string parameter was called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	std::cout << "Copy constructor was called" << std::endl;
	*this = toCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
	std::cout << "Copy assigment operator was called" << std::endl;
	if (this != &toCopy)
	{
		this->_name = toCopy._name;
		this->_hitPoints = toCopy._hitPoints;
		this->_energyPoints = toCopy._energyPoints;
		this->_attackDamage = toCopy._attackDamage;
	}
	return (*this);
}
