/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:34:59 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/05 16:43:50 by nfernand         ###   ########.fr       */
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
	ClapTrap	a("CL4P-L3K");

	//a.setAttackDamage(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.attack("CLAP-9000");
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	//a.beRepaired(2);
	//cout << "CL4P-L3K energy points: " << a.getEnergyPoints() << endl << endl;
	
	ScavTrap	b("Cluck-Trap");

	b.attack("CLAP-9000");
	b.guardGate();
	b.guardGate();
}
