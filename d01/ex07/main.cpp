/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:02:24 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 15:58:49 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>	// Input/output stream class to operate on files.
#include <sstream>	// Header providing string stream classes
#include <iostream>	// Input/output stream

int		main(int ac, char **av)
{
	if (ac != 4 || !strlen(av[1]) || !strlen(av[2]) || !strlen(av[3]))
	{
		std::cout << "Error occurred: not valid arguments" << std::endl;
		std::cout << "usage: ./replace file_name \"string_to_find\" \"string_to_replace_with\"" << std::endl;
		return 1;
	}

	const std::string file(av[1]);
	const std::string find(av[2]);
	const std::string replace(av[3]);
	// ifstream	Input stream class to operate on files.
	// ofstream	Output stream class to operate on files.
	std::ifstream fileToFind(file);
	std::ofstream replaceFile(file + ".replace");
	if (!fileToFind || !replaceFile)
	{
		std::cout << "Error occurred: not valid arguments" << std::endl;
		std::cout << "usage: ./replace file_name \"string_to_find\" \"string_to_replace_with\"" << std::endl;
		return 2;
	}
	// seekg	Sets the position of the next character to be extracted from the input stream.
	// tellg	Returns the position of the current character in the input stream.
	fileToFind.seekg(0, fileToFind.end);
	const size_t			length(fileToFind.tellg());
	if (length == std::string::npos) {
		std::cout << "Error occurred: cannot count length of file" << std::endl;
		return 3;
	}
	fileToFind.seekg(0, fileToFind.beg);
	char*					buffer = new char[length];
	fileToFind.read(buffer, length);
	std::string				s(buffer);

	for ( 
		size_t pos = s.find(find);
		pos != std::string::npos;
		pos = s.find(find, pos + replace.length())
	)
	{
		s.replace( pos, find.length(), replace );
	}

	replaceFile	<< s;

	delete [] buffer;

	return 0;
}