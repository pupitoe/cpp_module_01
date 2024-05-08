/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileData.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:28:34 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 20:33:37 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FILEDATA_CLASS_HPP
# define FILEDATA_CLASS_HPP

# include <iostream>
# define SUCCESS 0
# define FAIL 1

class	FileData
{
	private:
		std::string	file_name;
		std::string	word;
		std::string	replace_word;

	public:
		FileData(std::string file, std::string word, std::string replace);
		~FileData( void );

		std::string get_file_name( void ) const;
		std::string get_word( void ) const;
		std::string get_word_replace( void ) const;
};

#endif
