/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:37:32 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/11 17:08:29 by nazrinsha        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP 

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(string name);
		~DiamondTrap();

		void	whoAmI(void);
		void	attack(const string &target);

	private:
		DiamondTrap(void);

		string		_name;

};

#endif
