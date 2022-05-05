/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:09:51 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/05 17:46:10 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

using std::string;

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(string name);
		~FragTrap();

		void	highFiveGuys(void);
	
	protected:
		string	_name;
		int		_healh_points;
		int		_energy_points;
		int		_attack_damage;

	private:
};

#endif
