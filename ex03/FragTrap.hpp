/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:09:51 by nfernand          #+#    #+#             */
/*   Updated: 2022/05/06 10:30:04 by nazrinsha        ###   ########.fr       */
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
		~FragTrap();

		void	highFiveGuys(void);
	
	protected:
		FragTrap(void);

	private:
};

#endif
