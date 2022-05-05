/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:58:15 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/05 12:00:46 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

using std::string

class	ScavTrap
{
	public:
		ScavTrap(string name);
		~ScavTrap();
	
		void	attack(const string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		string	getName();
		int		getHealthPoints();
		int		getEnergyPoints();
		int		getAttackDamage();

		void	setName(string name);
		void	setHealthPoints(unsigned int value);
		void	setEnergyPoints(unsigned int value);
		void	setAttackDamage(unsigned int value);

		void	highFivesGuys(void);

	private:
		string	_name;
		int		_healh_points;
		int		_energy_points;
		int		_attack_damage;
};

#endif
