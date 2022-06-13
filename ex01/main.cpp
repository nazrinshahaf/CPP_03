/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:34:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 17:50:20 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include "colours.h"

using std::cout;
using std::endl;

int	main()
{
	cout << CYAN "[Testing ScavTrap main functions]" RESET << endl;
	{
		ScavTrap	scav_trap("Cluck-Trap");

		scav_trap.attack("CLAP-9000");
		scav_trap.guardGate();
		scav_trap.guardGate();
	}
	cout << endl;

	cout << CYAN "[Testing Copy Constructor and Copy Assignment Operator]" RESET << endl;
	{
		cout << CYAN "[Testing Copy Constructor]" RESET << endl;
		{
			ScavTrap	*scav_trap = new ScavTrap("Cluck-Trap");

			cout << MAGENTA "Changing values for original..." RESET << endl;
			scav_trap->setName("some bullshit name here");
			cout << endl;

			cout << MAGENTA "Copying ScavTrap..." RESET << endl;
			ScavTrap	*copy_trap = new ScavTrap(*scav_trap);
			cout << endl;

			cout << MAGENTA "Printing values for ScavTrap..." RESET << endl;
			cout << "Copy name: " << copy_trap->getName() << endl;
			cout << endl;

			delete copy_trap;
			delete scav_trap;
		}
		cout << endl;

		cout << CYAN "[Copy Assignment Operator]" RESET << endl;
		{
			ScavTrap	*scav_trap = new ScavTrap("Cluck-Trap");

			cout << MAGENTA "Changing values for original..." RESET << endl;
			scav_trap->setName("some bullshit name here");
			cout << endl;

			cout << MAGENTA "Creating CopyTrap..." RESET << endl;
			ScavTrap	*copy_trap = new ScavTrap("Copy-Trap");
			cout << endl;

			cout << MAGENTA "Printing values for CopyTrap..." RESET << endl;
			cout << "Copy name: " << copy_trap->getName() << endl;
			cout << endl;

			*copy_trap = *scav_trap;

			cout << MAGENTA "Printing values for CopyTrap..." RESET << endl;
			cout << "Copy name: " << copy_trap->getName() << endl;
			cout << endl;

			delete copy_trap;
			delete scav_trap;
		}
	}
}
