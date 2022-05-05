/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:10:01 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/05 16:32:22 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "colours.h"
#include <iostream>

using std::cout;
using std::endl;

ClapTrap::ClapTrap(string name)
{
	setName(name);
	cout << "Allow me to introduce myself - I am a" BLUE " <CL4P-TP> " RESET
		"steward bot, but my friends call me " YELLOW "<"
		<< name << ">" RESET "." << endl;
	setHealthPoints(10);
	setEnergyPoints(10);
	setAttackDamage(0);
	cout << endl;
}

ClapTrap::~ClapTrap()
{
 	cout << RED "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" RESET << endl;
}

void	ClapTrap::attack(const string &target)
{
	if (this->getHealthPoints() > 0 && this->getEnergyPoints() > 0)
	{
		cout << "CL4P-TP" YELLOW " <" << this->getName() << "> " RESET "attacks CL4P-TP " YELLOW "<" << target << 
			"> " RESET "causing " RED << this->getAttackDamage() << RESET " points of damage" << endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		if (this->getEnergyPoints() == 0)
			cout << "Who needs energy points anyway, am I right?" << endl;
	}
	//target.takeDamage(this->getAttackDamage);
}

void	ClapTrap::takeDamage(unsigned int value)
{
	if (this->getHealthPoints() > 0)
	{
		this->setHealthPoints(this->getHealthPoints() - value);
		cout << "CL4P-TP" << this->getName() << "takes " << value 
			<< "points of damage" << endl;
	}
}

void	ClapTrap::beRepaired(unsigned int value)
{
	if (this->getHealthPoints() > 0 && this->getEnergyPoints() > 0)
	{
		cout << "Sweet life juice! ";
		cout << "CL4P-TP " YELLOW "<" << this->getName() << "> " RESET "heals for " GREEN << value << "." RESET << endl;
		this->setHealthPoints(this->getHealthPoints() + value);
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		if (this->getEnergyPoints() == 0)
			cout << MAGENTA "Who needs energy points anyway, am I right?" RESET << endl;
	}
}

string	ClapTrap::getName()
{
	return (this->_name);
}

int		ClapTrap::getHealthPoints()
{
	return (this->_healh_points);
}

int		ClapTrap::getEnergyPoints()
{
	return (this->_energy_points);
}

int		ClapTrap::getAttackDamage()
{
	return (this->_attack_damage);
}

void	ClapTrap::setName(string name)
{
	this->_name = name;
}

void	ClapTrap::setHealthPoints(unsigned int value)
{
	this->_healh_points = value;
}

void	ClapTrap::setEnergyPoints(unsigned int value)
{
	this->_energy_points = value;
}

void	ClapTrap::setAttackDamage(unsigned int value)
{
	cout << YELLOW "<"<< this->getName() << "> " RESET "attack damage has been set to " RED << value << RESET <<  endl;
	this->_attack_damage = value;
}
