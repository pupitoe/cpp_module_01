/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:12:42 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 20:39:37 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.class.hpp"

static int	ft_launch(char **argv)
{
	FileData	file(argv[0], argv[1], argv[2]);
	int			status;

	status = SUCCESS;
	(void)file;
	return (status);
}

int	main(int argc, char **argv)
{
	int	status;

	status = FAIL;
	if (argc == 4)
		status = ft_launch(argv + 1);
	else
		std::cout << "Bad argument (file, word, replace word)\n";
	return (status);
}
