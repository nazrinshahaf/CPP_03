/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:34:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 18:01:04 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include "colours.h"

using std::cout;
using std::endl;

int	main()
{
	cout << CYAN "[Testing FragTrap main functions]" RESET << endl;
	{
		FragTrap	c("B4R-BOT");

		c.highFiveGuys();
	}
	cout << endl;

	cout << CYAN "[Testing Copy Constructor and Copy Assignment Operator]" RESET << endl;
	{
		cout << CYAN "[Testing Copy Constructor]" RESET << endl;
		{
			FragTrap	*frag_trap = new FragTrap("Cluck-Trap");

			cout << MAGENTA "Changing values for original..." RESET << endl;
			frag_trap->setName("some bullshit name here");
			cout << endl;

			cout << MAGENTA "Copying FragTrap..." RESET << endl;
			FragTrap	*copy_trap = new FragTrap(*frag_trap);
			cout << endl;

			cout << MAGENTA "Printing values for FragTrap..." RESET << endl;
			cout << "Copy name: " << copy_trap->getName() << endl;
			cout << endl;

			delete copy_trap;
			delete frag_trap;
		}
		cout << endl;

		cout << CYAN "[Copy Assignment Operator]" RESET << endl;
		{
			FragTrap	*frag_trap = new FragTrap("Cluck-Trap");

			cout << MAGENTA "Changing values for original..." RESET << endl;
			frag_trap->setName("some bullshit name here");
			cout << endl;

			cout << MAGENTA "Creating CopyTrap..." RESET << endl;
			FragTrap	*copy_trap = new FragTrap("Copy-Trap");
			cout << endl;

			cout << MAGENTA "Printing values for CopyTrap..." RESET << endl;
			cout << "Copy name: " << copy_trap->getName() << endl;
			cout << endl;

			*copy_trap = *frag_trap;

			cout << MAGENTA "Printing values for CopyTrap..." RESET << endl;
			cout << "Copy name: " << copy_trap->getName() << endl;
			cout << endl;

			delete copy_trap;
			delete frag_trap;
		}
	}

}
