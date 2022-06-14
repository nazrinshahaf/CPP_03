/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:52:40 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 15:58:32 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "colours.h"
#include <iostream>

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(string name)
{
	this->_name = name;
	cout << "Allow me to introduce myself - I am a" BLUE " <D14M0ND-TP> " RESET
		"steward bot, but my friends call me " YELLOW "<"
		<< this->_name << ">" RESET "." << endl;

	ClapTrap::_name = name + "_clap_name";
	setHealthPoints(FragTrap::_healh_points);
	setEnergyPoints(ScavTrap::_energy_points);
	setAttackDamage(FragTrap::_attack_damage);
	cout << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << RED "Argh arghargh death gurgle gurglegurgle urgh... death. - [DiamondTrap]" RESET << endl;
}

void	DiamondTrap::attack(const string &target)
{
	cout << "Attack function Inherited from ScavTrap" << endl;
	ScavTrap::attack(target, this->_name);
}

void	DiamondTrap::whoAmI(void)
{
	cout << "My name is " BLUE "<" << this->_name << ">" RESET << endl;
	cout << "My CL4P-TP name is " BLUE "<" << ClapTrap::_name << ">" RESET << endl;
	cout << "Hit Points: " BLUE "<" << getHealthPoints() << ">" RESET " - Inherited from FragTrap" << endl;
	cout << "Energy Points: " BLUE "<" << getEnergyPoints() << ">" RESET " - Inherited from ScavTrap"<< endl;
	cout << "Attack Damage: " BLUE "<" << getAttackDamage() << ">" RESET " - Inherited from FragTrap" << endl;
}
