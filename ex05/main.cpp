/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:59:42 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/10 12:44:54 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	harl.complain("hello commment tu vas ????");
	std::cout << "\n\n";
	harl.complain("DEBUG");
	std::cout << "\n\n";
	harl.complain("ERROR");
	std::cout << "\n\n";
	harl.complain("INFO");
	std::cout << "\n\n";
	harl.complain("WARNING");
	std::cout << "\n\n";
	harl.complain("florian");
	return (0);
}
