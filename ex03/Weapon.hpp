/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:06:42 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 19:19:58 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	private: 
		std::string	type;

	public:
		Weapon( std::string name );
		~Weapon( void );
		
		std::string	getType( void ) const;
		void		setType( std::string name );
};

#endif
