/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:10:17 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/06 09:49:44 by nazrinsha        ###   ########.fr       */
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
		~ClapTrap();
	
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

	protected:
		ClapTrap(void);

		string	_name;
		int		_healh_points;
		int		_energy_points;
		int		_attack_damage;

	private:
};

#endif
