/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juestrel <juestrel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:45:57 by juestrel          #+#    #+#             */
/*   Updated: 2024/08/07 08:49:34 by juestrel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap paco("Paco");

	for (unsigned int i = 0; i < 11; i++)
	{
		paco.attack("Enemy");
	}
	paco.beRepaired(25);
	
	ClapTrap joaquin("Joaquin");
	joaquin.takeDamage(4);
	joaquin.takeDamage(5);
	joaquin.beRepaired(0);
	joaquin.beRepaired(20);
	joaquin.takeDamage(40);
	joaquin.beRepaired(10);
	return (0);
}