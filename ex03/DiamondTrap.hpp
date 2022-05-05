/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:37:32 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/05 17:51:52 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP 

class DiamondTrap: public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(string name);
		~DiamondTrap();

	private:
		string	_name;

};

#endif
