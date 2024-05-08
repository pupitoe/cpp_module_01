/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:07:00 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 20:05:37 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"



int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	{
		Weapon club = Weapon("FABIO");
		HumanB flo("flo");
		flo.setWeapon(club);
		flo.attack();
		club.setType("Club io");
		flo.attack();
	}
	{
		Weapon club = Weapon("FABIO");
		HumanB titou("titou");
		HumanA abaccio("aba", club);
		titou.attack();
		titou.setWeapon(club);
		abaccio.attack();
		club.setType("key board");
		abaccio.attack();
		titou.attack();
	}
	return 0;
}
