/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:05:27 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 17:41:48 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "colours.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

ScavTrap::ScavTrap(string name): ClapTrap(name)
{
	cout << "Allow me to introduce myself - I am a" BLUE " <SC4V-TP> " RESET
		"steward bot, but my friends call me " YELLOW "<"
		<< name << ">" RESET "." << endl;
	setHealthPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	this->_guard_gate_mode = 0;
	cout << endl;
}

ScavTrap::ScavTrap(ScavTrap const &tocopy) : ClapTrap(tocopy.getName())
{
	cout << GREEN "ScavTrap Copy Constructor Called" RESET << endl;
	setHealthPoints(tocopy.getHealthPoints());
	setEnergyPoints(tocopy.getEnergyPoints());
	setAttackDamage(tocopy.getAttackDamage());
	this->_guard_gate_mode = tocopy.getGuardGateMode();
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &tocopy)
{
	cout << GREEN "ScavTrap Copy Assignment Operator Called" RESET << endl;
	setName(tocopy.getName());
	setHealthPoints(tocopy.getHealthPoints());
	setEnergyPoints(tocopy.getEnergyPoints());
	setAttackDamage(tocopy.getAttackDamage());
	this->_guard_gate_mode = tocopy.getGuardGateMode();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	cout << RED "MY EYE! AHHHHHH! - [ScavTrap]" RESET << endl;
}

void	ScavTrap::guardGate(void)
{
	this->_guard_gate_mode = !this->_guard_gate_mode;
	if (this->_guard_gate_mode == 1)
		cout << MAGENTA "Activating guard gate mode..." RESET << endl;
	else
		cout << MAGENTA "Deactivating guard gate mode..." RESET << endl;
}

bool	ScavTrap::getGuardGateMode(void) const
{
	return (this->_guard_gate_mode);
}

void	ScavTrap::setGuardGateMode(bool value)
{
	this->_guard_gate_mode = value;
}
