/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:33:42 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 16:19:51 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	this->name = "chris";
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
	Zombie	chump;
	
	chump.ft_set_name(name);
	chump.announce();
	return ;
}

void	Zombie::ft_set_name(std::string name)
{
	this->name = name;
	return ;
}
