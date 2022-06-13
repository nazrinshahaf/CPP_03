/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:05:27 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 18:40:21 by nfernand         ###   ########.fr       */
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
	setName(name);
	cout << "Allow me to introduce myself - I am a" BLUE " <SC4V-TP> " RESET
		"steward bot, but my friends call me " YELLOW "<"
		<< name << ">" RESET "." << endl;
	setHealthPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	this->_guard_gate_mode = 0;
}

ScavTrap::ScavTrap(void)
{
	setName("");
	cout << "Allow me to introduce myself - I am a" BLUE " <SC4V-TP> " RESET
		"steward bot. Who am I? Am I god?" << endl;
	setHealthPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
	this->_guard_gate_mode = 0;
	cout << "ScavHP: " << ScavTrap::_healh_points << endl;
	cout << "ScavEn: " << ScavTrap::_energy_points << endl;
	cout << "ScavAD: " << ScavTrap::_attack_damage << endl;
}

ScavTrap::~ScavTrap()
{
 	cout << RED "MY EYE! AHHHHHH!" RESET << endl;
}

void	ScavTrap::attack(const string &target, const string name)
{
	if (this->getHealthPoints() > 0 && this->getEnergyPoints() > 0)
	{
		cout << "SC4V-TP" YELLOW " <" << name << "> " RESET "attacks CL4P-TP " YELLOW "<" << target << 
			"> " RESET "causing " RED << this->getAttackDamage() << RESET " points of damage" << endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		if (this->getEnergyPoints() == 0)
			cout << "Who needs energy points anyway, am I right?" << endl;
	}
}

void	ScavTrap::guardGate(void)
{
	this->_guard_gate_mode = !this->_guard_gate_mode;
	if (this->_guard_gate_mode == 1)
		cout << MAGENTA "Activating guard gate mode..." RESET << endl;
	else
		cout << MAGENTA "Deactivating guard gate mode..." RESET << endl;
}
