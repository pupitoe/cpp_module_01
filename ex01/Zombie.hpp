/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 19:40:29 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 16:20:48 by tlassere         ###   ########.fr       */
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
		Zombie( void );
		~Zombie( void );

		void	ft_set_name(std::string name);
		void	announce( void );
		Zombie*	newZombie( std::string name );
		void	randomChump( std::string name );
		Zombie*	zombieHorde( int N, std::string name );
};

#endif
