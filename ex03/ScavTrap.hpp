/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:58:15 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 14:53:13 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

using std::string;

class	ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(string name);
		ScavTrap(ScavTrap const &tocopy);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &tocopy);
		void	guardGate(void);

		bool	getGuardGateMode(void) const;
		void	setGuardGateMode(bool value);

		void    attack(string const &target, string const &name);

	protected:
		ScavTrap();

		string	_name;
		int		_healh_points;
		int		_energy_points;
		int		_attack_damage;

	private:
		bool	_guard_gate_mode;
};

#endif
