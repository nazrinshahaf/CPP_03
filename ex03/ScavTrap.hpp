/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:58:15 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 18:08:22 by nfernand         ###   ########.fr       */
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
		~ScavTrap();
	
		void	guardGate(void);
		void	attack(const string &target, const string name);
	
	protected:
		ScavTrap(void);

	private:
		bool	_guard_gate_mode;
};

#endif
