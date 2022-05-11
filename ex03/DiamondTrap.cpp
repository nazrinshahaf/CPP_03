/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:52:40 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/11 17:12:54 by nazrinsha        ###   ########.fr       */
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
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_healh_points = FragTrap::_healh_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	cout << "Allow me to introduce myself - I am a" BLUE " <D14M0ND-TP> " RESET
		"steward bot, but my friends call me " YELLOW "<"
		<< name << ">" RESET "." << endl;
}

DiamondTrap::DiamondTrap(void)
{
	
}

DiamondTrap::~DiamondTrap()
{
	cout << RED "Argh arghargh death gurgle gurglegurgle urgh... death." RESET << endl;
}

void	DiamondTrap::attack(const string &target)
{
	ScavTrap::attack(target, this->_name);
}

void	DiamondTrap::whoAmI(void)
{
	cout <<  "My name is " YELLOW "<" << this->_name << ">" RESET << endl;
	cout <<  "My CL4P-TP name is " YELLOW "<" << ClapTrap::_name << ">" RESET << endl;
}
