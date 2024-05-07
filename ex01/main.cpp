/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:33:56 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/07 19:32:40 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int parker, char **pierrre)
{
	Zombie	*tom_tom;
	Zombie	*pir;

	Zombie tom("tom");
	tom_tom = tom.newZombie("dah");
	tom.announce();
	if (tom_tom)
	{
		tom_tom->announce();
		pir = tom_tom->newZombie("pi2r");
		if (pir)
		{
			pir->randomChump("bakamitae");
			pir->announce();
			delete pir;
		}
		delete tom_tom;
	}
	tom.randomChump("polo");
	if (parker == static_cast<int> (parker) && pierrre[parker] == NULL)
		return (0);
	return (0);
}
