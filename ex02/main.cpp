/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:47:41 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 18:00:26 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string		string;
	std::string*	stringPTR;
	std::string&	stringREF = string;

	string = "HI THIS IS BRAIN";
	stringREF = string;
	stringPTR = &string;
	std::cout << "Memorie address:\n";
	std::cout << "- string: " << &string << "\n";
	std::cout << "- stringPTR: " << stringPTR << "\n";
	std::cout << "- stringREF: " << &stringREF << "\n";
	std::cout << "Content:\n";
	std::cout << "- string: " << string << "\n";
	std::cout << "- stringPTR: " << *stringPTR << "\n";
	std::cout << "- stringREF: " << stringREF << "\n";
	return (0);
}