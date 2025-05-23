/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 23:24:32 by jmafueni          #+#    #+#             */
/*   Updated: 2025/05/23 14:01:27 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
	{
		std::cout << "Error: negative number!" << std::endl;
		return NULL;
	}
	int i = 0;
	Zombie *zz = new Zombie[N];
	while (i != N)
	{
		zz[i].nameZombie(name);
		i++;
	}
	return zz;
}
