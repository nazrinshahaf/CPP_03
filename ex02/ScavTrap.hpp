/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:58:15 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 17:39:14 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

using std::string;

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(string name);
		ScavTrap(ScavTrap const &tocopy);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &tocopy);
		void	guardGate(void);

		bool	getGuardGateMode(void) const;
		void	setGuardGateMode(bool value);

	private:
		bool	_guard_gate_mode;
};

#endif
