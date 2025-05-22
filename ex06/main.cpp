/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 15:11:32 by jmafueni          #+#    #+#             */
/*   Updated: 2025/05/22 12:41:27 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac == 2){
		Harl	Harl;
		std::string	level = av[1];
		Harl.complain(level);
		return 1;
	}
	
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return 0;
}