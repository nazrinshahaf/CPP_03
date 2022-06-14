/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:09:51 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 14:41:46 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

using std::string;

class	FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(string name);
		FragTrap(FragTrap const &tocopy);
		~FragTrap();

		FragTrap	&operator=(FragTrap const &tocopy);

		void	highFiveGuys(void);

	protected:
		FragTrap();

		string	_name;
		int		_healh_points;
		int		_energy_points;
		int		_attack_damage;

	private:
};

#endif
