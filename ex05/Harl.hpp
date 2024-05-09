/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:00:07 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/09 20:01:21 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

struct	s_func;

class	Harl
{
	private:
		void			debug( void );
		void			warning( void );
		void			info( void );
		void			error( void );
		struct s_func	message[4];
		

	public:
		Harl( void );
		~Harl( void );

		void	complain( std::string level );
};

struct s_func
{
	std::string	val;
	void	(Harl::*func)();
};

#endif