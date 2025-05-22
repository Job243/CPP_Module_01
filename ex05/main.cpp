/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:59:41 by jmafueni          #+#    #+#             */
/*   Updated: 2025/05/22 13:51:55 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error: missing parameter: Harl <complain> !" << std::endl;
		return 1;
	}
	Harl	harl;
	harl.complain(av[1]);
	
	return 0;
}