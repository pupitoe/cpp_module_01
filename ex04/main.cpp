/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:12:42 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/09 16:21:31 tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.class.hpp"

static int	ft_replaced(std::fstream& in, std::fstream& out, FileData& fdata)
{
	int	status;

	status = SUCCESS;
	//in << "kiwi conmic \n";
	out.write("kiki", 4);
	(void)in;
	(void)fdata;
	return (status);
}

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
		if (file_out.fail() == 0)
		{
			status = ft_replaced(file_in, file_out, fdata); 
			file_out.close();
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
