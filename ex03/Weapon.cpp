/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:07:17 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 19:20:04 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string name )
{
	this->setType(name);
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

std::string Weapon::getType( void ) const
{
	return (this->type);
}

void	Weapon::setType( std::string name )
{
	this->type = name;
	return ;
}
