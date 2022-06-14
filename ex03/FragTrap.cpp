/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:09:45 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 15:04:10 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "colours.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

FragTrap::FragTrap(string name): ClapTrap(name)
{
	cout << "Allow me to introduce myself - I am a" BLUE " <FR4G-TP> " RESET
		"steward bot, but my friends call me " YELLOW "<"
		<< name << ">" RESET "." << endl;
	setHealthPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);

	this->_name = name;
	this->_healh_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	cout << endl;
}

FragTrap::FragTrap()
{
	cout << "Allow me to introduce myself - I am a" BLUE " <FR4G-TP> " RESET
		"steward bot, but my friends call me " YELLOW "<"
		<< this->_name << ">" RESET "." << endl;
	setHealthPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);

	this->_name = "";
	this->_healh_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	cout << endl;
}

FragTrap::~FragTrap()
{
	cout << RED "I'm too pretty to die!" RESET << endl;
}

FragTrap::FragTrap(FragTrap const &tocopy) : ClapTrap(tocopy.getName())
{
	cout << GREEN "FragTrap Copy Constructor Called" RESET << endl;
	setHealthPoints(tocopy.getHealthPoints());
	setEnergyPoints(tocopy.getEnergyPoints());
	setAttackDamage(tocopy.getAttackDamage());
}

FragTrap	&FragTrap::operator=(FragTrap const &tocopy)
{
	cout << GREEN "FragTrap Copy Assignment Operator Called" RESET << endl;
	setName(tocopy.getName());
	setHealthPoints(tocopy.getHealthPoints());
	setEnergyPoints(tocopy.getEnergyPoints());
	setAttackDamage(tocopy.getAttackDamage());
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	cout << MAGENTA "Secret handshake!" RESET << endl;
}
