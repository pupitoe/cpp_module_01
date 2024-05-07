/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:33:42 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/07 19:37:59 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->name = name;
	return ;
}

Zombie::~Zombie( void )
{
	return ;
}

void	Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ\n";
	return ;
}

void	Zombie::randomChump( std::string name )
{
	Zombie	chump(name);
	
	chump.announce();
	return ;
}
