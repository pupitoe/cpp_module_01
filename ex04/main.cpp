/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:12:42 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/09 14:52:12 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.class.hpp"

static int	ft_launch(char **argv)
{
	int				status;
	FileData		fdata(argv[0], argv[1], argv[2]);
	std::fstream	file_in;
	std::fstream	file_out;

	status = FAIL;
	file_in.open(fdata.get_file_name().c_str(), std::fstream::in);
	if (file_in.fail() == 0)
	{
		file_out.open(fdata.get_file_replace().c_str(), std::fstream::out);
		if (file_in.fail() == 0)
		{
			status = SUCCESS;
			file_in.close();
		}
		file_in.close();
	}
	if (status == FAIL)
		std::cout << "An error has occurred\n";
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
