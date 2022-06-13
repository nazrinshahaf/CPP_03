/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:09:51 by nfernand          #+#    #+#             */
/*   Updated: 2022/06/13 17:57:20 by nfernand         ###   ########.fr       */
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
		FragTrap(FragTrap const &tocopy);
		~FragTrap();

		FragTrap	&operator=(FragTrap const &tocopy);

		void	highFiveGuys(void);

	private:
};

#endif
