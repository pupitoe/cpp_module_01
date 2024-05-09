/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:14:21 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/09 20:16:00 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	this->message[0].func = &Harl::warning;
	this->message[0].val = "WARNING";
	this->message[1].func = &Harl::info;
	this->message[1].val = "INFO";
	this->message[2].func = &Harl::debug;
	this->message[2].val = "DEBUG";
	this->message[3].func = &Harl::error;
	this->message[3].val = "ERROR";
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::debug( void )
{
	std::cout << " love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!\n";
	return ;
}

void	Harl::info( void )
{
	std::cout << " cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!\n";
	return ;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	return ;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working ";
	std::cout << "here since last month.\n";
	return ;
}

void	Harl::no_level( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
	return ;
}

void	Harl::complain( std::string level )
{
	Harl	call;
	int		i;
	void	(Harl::*func)();

	i = 0;
	func = &Harl::no_level;
	while (i < 4 && func != &Harl::no_level)
	{
		if (level == this->message[i].val)
			func = this->message[i].func;
		i++;
	}
	func = &Harl::warning;
	(call.*func)();
}
