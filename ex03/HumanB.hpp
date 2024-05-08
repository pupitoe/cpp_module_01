/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:06:55 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 19:34:55 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;
		int			weapon_set;
	
	public:
		HumanB( std::string name);
		~HumanB( void );
		void setWeapon( class Weapon& weapon );
		void	attack( void ) const;
};


#endif
