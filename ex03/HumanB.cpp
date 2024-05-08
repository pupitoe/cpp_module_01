/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:06:53 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 19:41:58 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->weapon_set = 0;
	this->name = name;
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void HumanB::setWeapon( class Weapon& weapon )
{
	this->weapon_set = 1;
	this->weapon = &weapon;
	return ;
}

void	HumanB::attack( void ) const
{
	if (this->weapon_set)
		std::cout << this->name << " attacks with their "
		<< this->weapon->getType() << "\n";
	else
		std::cout << "OH NO " << this->name << " NO HAVE wEaPoN\n";
	return ;
}
