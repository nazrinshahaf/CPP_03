/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:10:17 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 14:29:29 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

using std::string;

class	ClapTrap
{
	public:
		ClapTrap(string name);
		ClapTrap(ClapTrap const &tocopy);
		~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &tocopy);

		void	attack(string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		string	getName(void) const;
		int		getHealthPoints(void) const;
		int		getEnergyPoints(void) const;
		int		getAttackDamage(void) const;

		void	setName(string const name);
		void	setHealthPoints(unsigned int value);
		void	setEnergyPoints(unsigned int value);
		void	setAttackDamage(unsigned int value);

	protected:
		ClapTrap();

		string	_name;
		int		_healh_points;
		int		_energy_points;
		int		_attack_damage;
};

#endif
