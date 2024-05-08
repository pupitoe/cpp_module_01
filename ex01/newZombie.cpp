/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:33:48 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 16:20:34 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name )
{
	Zombie	*new_zombar;

	new_zombar = new (std::nothrow) Zombie;
	if (new_zombar)
		new_zombar->ft_set_name(name);
	return (new_zombar);
}
