/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:34:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 15:08:44 by nfernand         ###   ########.fr       */
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
	diamond_trap.whoAmI();
	cout << endl;

	cout << MAGENTA "Attacking a CLAP-9000 bot..." RESET << endl;
	diamond_trap.attack("CLAP-9000");
	cout << endl;
	//diamond_trap.whoAmI();
}
