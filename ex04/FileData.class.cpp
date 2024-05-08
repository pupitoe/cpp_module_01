/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileData.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 20:34:01 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/08 20:37:46 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.class.hpp"

FileData::FileData( std::string file, std::string word, std::string replace )
{
	this->file_name = file;
	this->word = word;
	this->replace_word = replace;
	return ;
}

FileData::~FileData( void )
{
	return ;
}

std::string FileData::get_file_name( void ) const
{
	return (this->file_name);
}
std::string FileData::get_word( void ) const
{
	return (this->word);
}
std::string FileData::get_word_replace( void ) const
{
	return (this->replace_word);
}
