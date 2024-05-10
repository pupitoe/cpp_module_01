/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:14:21 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/10 13:14:02 tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	this->func[0] = &Harl::debug;
	this->message[0] = "DEBUG";
	this->func[1] = &Harl::info;
	this->message[1] = "INFO";
	this->func[2] = &Harl::warning;
	this->message[2] = "WARNING";
	this->func[3] = &Harl::error;
	this->message[3] = "ERROR";
	return ;
}

Harl::~Harl( void )
{
	return ;
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout << "I really do!\n";
	return ;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn't put enough bacon in my burger!\n";
	std::cout << "If you did, I wouldn't be asking for more!\n";
	return ;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	return ;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
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
	int		buffer;

	i = 0;
	buffer = 0;
	while (i < 4)
	{
		if (level == this->message[i])
			buffer = 1;
		if (buffer)
			(call.*func[i])();
		if (buffer)
			std::cout << "\n";
		i++;
	}
	switch (buffer)
	{
		case (0):
			Harl::no_level();
			break;
		default:
			break;
	}
}
