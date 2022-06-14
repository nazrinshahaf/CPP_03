/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:37:32 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/14 14:53:52 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP 

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(string name);
		virtual ~DiamondTrap();

		void	whoAmI(void);
		void	attack(const string &target);

	private:
		string		_name;

};

#endif
