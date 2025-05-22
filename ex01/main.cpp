/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 23:13:17 by jmafueni          #+#    #+#             */
/*   Updated: 2025/05/22 13:32:31 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	size_t	N = 7;
	Zombie *tab;

	tab = zombieHorde(N, "ZombieHorde");
	for (size_t i = 0; i < N; i++)
	{
		tab[i].announce();
	}
	delete [] tab;
	return (0);
}