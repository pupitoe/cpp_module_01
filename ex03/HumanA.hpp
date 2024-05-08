/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:06:50 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 19:44:33 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	private:
		Weapon*		weapon;
		std::string	name;
	
	public:
		HumanA( std::string name, class Weapon& weapon );
		~HumanA( void );
		void	attack( void ) const;
};

#endif
