/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:34:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 18:14:56 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>
#include "colours.h"

using std::cout;
using std::endl;

int	main()
{
	DiamondTrap	diamond_trap("DAN-TRP");

	cout << MAGENTA "Printing out " << diamond_trap.getName() << "\'s stats..." RESET << endl;
	cout << "Name: " << diamond_trap.getName() << endl;
	cout << "Attack Damage: " << diamond_trap.getAttackDamage() << endl;
	cout << "Hit Points: " << diamond_trap.getHealthPoints() << endl;
	cout << "Energy Points: " << diamond_trap.getEnergyPoints() << endl;
	//cout << endl;
	//diamond_trap.attack("CLAP-9000");
	//cout << endl;
	//diamond_trap.whoAmI();
}
