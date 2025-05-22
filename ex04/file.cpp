/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:05:18 by jmafueni          #+#    #+#             */
/*   Updated: 2025/05/21 13:56:10 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

void	searchandreplace(std::string filename, std::string s1, std::string s2)
{
    std::ifstream	infile(filename.c_str());
	if (!infile)
	{
		std::cout << "Error: cannot open file " << filename << std::endl;
		return ;
	}
	std::string	replace = filename + ".replace";
	std::ofstream	outfile(replace.c_str());
	if (!outfile)
	{
		std::cout << "Error: cannot create file" << replace << std::endl;
		return;
	}
	
	std::string	line;
	while (std::getline(infile,line))
	{
		size_t	pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line << std::endl;
	}
	
	infile.close();
	outfile.close();
}