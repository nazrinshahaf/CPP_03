/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:09:45 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/11 17:00:20 by nazrinsha        ###   ########.fr       */
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
	setName(name);
	cout << "Allow me to introduce myself - I am a" BLUE " <FR4G-TP> " RESET
		"steward bot, but my friends call me " YELLOW "<"
		<< name << ">" RESET "." << endl;
	setHealthPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	cout << endl;
}

FragTrap::FragTrap(void)
{
	setName("");
	cout << "Allow me to introduce myself - I am a" BLUE " <FR4G-TP> " RESET
		"steward bot. Who am I? Am I god?" << endl;
	setHealthPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::~FragTrap()
{
 	cout << RED "I'm too pretty to die!" RESET << endl;
}

void	FragTrap::highFiveGuys(void)
{
	cout << MAGENTA "Secret handshake!" RESET << endl;
}
