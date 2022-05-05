/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:58:15 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/05 16:38:36 by nfernand         ###   ########.fr       */
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
		~ScavTrap();
	
		void	guardGate(void);

	private:
		bool	_guard_gate_mode;
};

#endif
