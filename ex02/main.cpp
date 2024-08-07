/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:45:57 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/07 17:15:02 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap paco("Paco");

	for (unsigned int i = 0; i < 11; i++)
		paco.attack("Enemy");
	paco.beRepaired(25);
	
	ClapTrap joaquin("Joaquin");
	joaquin.takeDamage(4);
	joaquin.takeDamage(5);
	joaquin.beRepaired(0);
	joaquin.beRepaired(20);
	joaquin.takeDamage(40);
	joaquin.beRepaired(10);

	ScavTrap manolo("Manolo");
	for (unsigned int i = 0; i < 51; i++)
		manolo.attack("New enemy");
	manolo.guardGate();
	manolo.beRepaired(100);
	manolo.takeDamage(50);
	manolo.takeDamage(50);
	manolo.beRepaired(100);

	FragTrap jimeno("Jimeno");
	jimeno.beRepaired(100);
	for (unsigned int i = 0; i < 100; i++)
		jimeno.attack("Another new enemy");
	jimeno.highFivesGuys();
	jimeno.takeDamage(100);
	jimeno.beRepaired(100);
	jimeno.takeDamage(100);
	jimeno.beRepaired(200);
	return (0);
}