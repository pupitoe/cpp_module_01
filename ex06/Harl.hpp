/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:00:07 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/10 12:39:19 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	private:
		void			debug( void );
		void			warning( void );
		void			info( void );
		void			error( void );
		void			no_level( void );
		std::string		message[4];
		void			(Harl::*func[4])();
		

	public:
		Harl( void );
		~Harl( void );

		void	complain( std::string level );
};

#endif
