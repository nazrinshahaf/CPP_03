/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main.cpp											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: nfernand <nfernand@student.42kl.edu.m		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2022/05/05 10:34:59 by nfernand		   #+#	  #+#			  */
/*	 Updated: 2022/06/13 16:06:08 by nfernand		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include "colours.h"

using std::cout;
using std::endl;

int	main()
{
	cout << CYAN "[Testing core functions of ClapTrap class]" RESET << endl;
	{
		ClapTrap	a("CL4P-L3K");

		cout << endl;
		cout << MAGENTA "Changing attack damage..." RESET << endl;
		a.setAttackDamage(2);

		cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
		cout << MAGENTA "Attacking..." RESET << endl;
		a.attack("CLAP-9000");
		cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
		cout << MAGENTA "Repairing..." RESET << endl;
		a.beRepaired(2);
		cout << endl;

		cout << MAGENTA "Trying to run out of energy points..." RESET << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
			cout << MAGENTA "Repairing..." RESET << endl;
			a.beRepaired(2);
		}
		cout << endl;

		cout << MAGENTA "Taking damage till dead..." RESET << endl;
		cout << "HP: " << a.getHealthPoints() << endl;
		a.takeDamage(28);
	}
	cout << endl;

	cout << CYAN "[Testing copy Constructor and Copy Assignment Operators]" RESET << endl;
	{
		cout << CYAN "[Testing copy Constructor]" RESET << endl;
		{
			ClapTrap	*b = new ClapTrap("CL4P-L3K");

			cout << MAGENTA "Changing values for: " << b->getName() << "..." RESET << endl;
			b->setHealthPoints(1000);
			b->setAttackDamage(30);
			cout << endl;

			cout << MAGENTA "Testing Copy Constructor..." RESET << endl;
			ClapTrap	*c = new ClapTrap(*b);
			cout << endl;

			cout << BLUE "ClapTrap c name:	" << c->getName() << RESET << endl;
			cout << BLUE "ClapTrap c HP:		" << c->getHealthPoints() << RESET << endl;
			cout << BLUE "ClapTrap c Attack Dmg:	" << c->getAttackDamage() << RESET << endl;
			cout << endl;

			cout << MAGENTA "Deleting ClapTrap b..." RESET << endl;
			delete b;
			cout << endl;

			cout << MAGENTA "Printing out Claptrap c values..." RESET << endl;
			cout << BLUE "ClapTrap c name:	" << c->getName() << RESET << endl;
			cout << BLUE "ClapTrap c HP:		" << c->getHealthPoints() << RESET << endl;
			cout << BLUE "ClapTrap c Attack Dmg:	" << c->getAttackDamage() << RESET << endl;
			delete c;
			cout << endl;
		}

		cout << CYAN "[Testing copy Assignment Operators]" RESET << endl;
		{
			ClapTrap	*d = new ClapTrap("CL4P-L3K");
			cout << MAGENTA "Changing values for: " << d->getName() << "..." RESET << endl;
			d->setHealthPoints(900);
			d->setAttackDamage(123);

			ClapTrap	*e = new ClapTrap("LMA0-B0t");
			cout << MAGENTA "Changing values for: " << e->getName() << "..." RESET << endl;
			e->setHealthPoints(818);
			e->setAttackDamage(1923);
			cout << endl;

			cout << MAGENTA "Assigning LMA0-B0t to CL4P-L3K: " << e->getName() << "..." RESET << endl;
			*e = *d;
			cout << endl;

			cout << MAGENTA "Printing out LMA0-B0t values..." RESET << endl;
			cout << BLUE "LmaoBot name:		" << e->getName() << RESET << endl;
			cout << BLUE "LmaoBot HP:		" << e->getHealthPoints() << RESET << endl;
			cout << BLUE "LmaoBot Attack Dmg:	" << e->getAttackDamage() << RESET << endl;
			cout << endl;

			cout << MAGENTA "Deleting Claptrap d..." RESET << endl;
			delete d;
			cout << endl;

			cout << MAGENTA "Printing out LMA0-B0t values..." RESET << endl;
			cout << BLUE "LmaoBot name:		" << e->getName() << RESET << endl;
			cout << BLUE "LmaoBot HP:		" << e->getHealthPoints() << RESET << endl;
			cout << BLUE "LmaoBot Attack Dmg:	" << e->getAttackDamage() << RESET << endl;
			cout << endl;

			delete e;
		}
	}
}
