/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:10:01 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 16:17:05 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "colours.h"
#include <iostream>

using std::cout;
using std::endl;

ClapTrap::ClapTrap(string name)
{
	this->_name = name;
	cout << "Allow me to introduce myself - I am a CL4P-TP steward bot, but my friends call me " YELLOW "<"
		<< name << ">" RESET "." << endl;
	this->_healh_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	cout << endl;
}

ClapTrap::~ClapTrap()
{
	cout << RED "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" RESET << endl;
}

ClapTrap::ClapTrap(ClapTrap const &tocopy)
{
	cout << GREEN "Default Copy Constructor Called" RESET << endl;
	this->_name = tocopy.getName();
	this->_healh_points = tocopy.getHealthPoints();
	this->_energy_points = tocopy.getEnergyPoints();
	this->_attack_damage = tocopy.getAttackDamage();
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &tocopy)
{
	cout << GREEN "Default Copy Assignment Operator Called" RESET << endl;
	this->_name = tocopy.getName();
	this->_healh_points = tocopy.getHealthPoints();
	this->_energy_points = tocopy.getEnergyPoints();
	this->_attack_damage = tocopy.getAttackDamage();
	return (*this);
}

void	ClapTrap::attack(string const &target)
{
	if (this->_healh_points > 0 && this->_energy_points > 0)
	{
		cout << "CL4P-TP" YELLOW " <" << this->_name << "> " RESET "attacks CL4P-TP " YELLOW "<" << target <<
			"> " RESET "causing " RED << this->_attack_damage << RESET " points of damage" << endl;
		this->_energy_points--;
		if (this->_energy_points == 0)
			cout << MAGENTA "Who needs energy points anyway, am I right?" RESET << endl;
	}
	else
		cout << MAGENTA "Who needs energy points anyway, am I right?" RESET << endl;
	//target.takeDamage(this->getAttackDamage);
}

void	ClapTrap::takeDamage(unsigned int value)
{
	if (this->_healh_points > 0)
	{
		this->_healh_points -= value;
		if (this->_healh_points < 0)
			this->_healh_points = 0;
		cout << "CL4P-TP" << this->_name << "takes " RED << value
			<< RESET " points of damage" << endl;
		if (this->_healh_points <= 0)
			cout << MAGENTA "Anddddd I'm dead" RESET << endl;
	}
	else
		cout << MAGENTA "ARRRGHHH I'M ALREADY DEADDDDDDDD" RESET << endl;
}

void	ClapTrap::beRepaired(unsigned int value)
{
	if (this->_healh_points	> 0 && this->_energy_points > 0)
	{
		cout << "Sweet life juice! ";
		cout << "CL4P-TP " YELLOW "<" << this->_name << "> " RESET "heals for " GREEN << value << "." RESET << endl;
		this->_healh_points += value;
		this->_energy_points--;
		if (this->getEnergyPoints() == 0)
			cout << MAGENTA "Who needs energy points anyway, am I right?" RESET << endl;
	}
	else
		cout << MAGENTA "Who needs energy points anyway, am I right?" RESET << endl;
}

string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int		ClapTrap::getHealthPoints(void) const
{
	return (this->_healh_points);
}

int		ClapTrap::getEnergyPoints(void) const 
{
	return (this->_energy_points);
}

int		ClapTrap::getAttackDamage(void) const
{
	return (this->_attack_damage);
}

void	ClapTrap::setName(string const name)
{
	cout << YELLOW "<"<< this->_name << "> " RESET "health points has been set to " RED << name << RESET <<  endl;
	this->_name = name;
}

void	ClapTrap::setHealthPoints(unsigned int value)
{
	cout << YELLOW "<"<< this->_name << "> " RESET "health points has been set to " RED << value << RESET <<  endl;
	this->_healh_points = value;
}

void	ClapTrap::setEnergyPoints(unsigned int value)
{
	cout << YELLOW "<"<< this->_name << "> " RESET "energy points has been set to " RED << value << RESET <<  endl;
	this->_energy_points = value;
}

void	ClapTrap::setAttackDamage(unsigned int value)
{
	cout << YELLOW "<"<< this->_name << "> " RESET "attack damage has been set to " RED << value << RESET <<  endl;
	this->_attack_damage = value;
}
