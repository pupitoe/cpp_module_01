/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:40:26 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 16:40:13 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde( int N, std::string name )
{
	int			i;
	std::string	chris;
	Zombie		*horde;
	
	horde = NULL;
	if (N > 1)
	{
		horde = new (std::nothrow) Zombie[N];
		if (horde)
		{
			i = 0;
			chris = "chris";
			while (i < N)
			{
				horde[i].ft_set_name(name);
				name += chris[i % chris.length()];
				i++;
			}
		}
	}
	else
		std::cout << "Bad horde -_-\n";
	return (horde);
}
