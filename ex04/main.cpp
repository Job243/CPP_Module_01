/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:04:41 by jmafueni          #+#    #+#             */
/*   Updated: 2025/05/21 13:44:51 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: <file> <string1> <string2>" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	searchandreplace(filename, s1, s2);
	return 0;
}