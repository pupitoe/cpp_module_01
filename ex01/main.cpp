/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:33:56 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 16:45:46 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	ft_display_zombie_horde(int n, std::string name)
{
	int		i;
	Zombie	original;
	Zombie	*hord;

	hord = original.zombieHorde(n, name);
	i = 0;
	if (hord)
	{
		while (i < n)
		{
			hord[i].announce();
			i++;
		}
		delete [] hord;
	}
}

int	main(void)
{
	Zombie	origina;

	ft_display_zombie_horde(69, "PI2R");
	ft_display_zombie_horde(2, "Florian le bg cosmic");
	origina.zombieHorde(0, "kwiwi");
	origina.zombieHorde(-69, "kwiwicosmic");
	return (0);
}
