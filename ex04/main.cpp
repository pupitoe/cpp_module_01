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

static void	ft_push(std::fstream& out, FileData& fdata,
	std::string& push_string)
{
	if (fdata.get_word().rfind(push_string, 0) == 0)
	{
		if (fdata.get_word().length() == push_string.length())
		{
			push_string = "";
			out << fdata.get_word_replace().c_str();
		}
	}
	else
	{
		out << push_string.c_str();
		push_string = "";
	}
}

static int	ft_replaced(std::fstream& in, std::fstream& out, FileData& fdata)
{
	int			status;
	char		car;
	std::string	push_string;

	push_string = "";
	status = FAIL;
	while (in.fail() == 0 && out.fail() == 0 && in.eof() == 0)
	{
		if (in.read(&car, 1))
		{
			push_string += car;
			ft_push(out, fdata, push_string);
		}
	}
	if (in.eof() == 1 && out.fail() == 0 && push_string.length())
		out << push_string.c_str();
	if ((in.fail() == 0 || in.eof() == 1) && out.fail() == 0)
		status = SUCCESS;
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
