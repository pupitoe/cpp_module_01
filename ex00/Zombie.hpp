/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:33:10 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/07 19:40:53 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{
	private:
		std::string	name;

	public:
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );
		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );
};

# endif
