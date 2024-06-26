/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:06:44 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 19:57:40 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, class Weapon& weapon ): weapon(weapon)
{
	this->name = name;
	return ;
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::attack( void ) const
{
	std::cout << this->name << " attacks with their " << this->weapon.getType()
		<< "\n";
	return ;
}
