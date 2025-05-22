/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 21:55:15 by jmafueni          #+#    #+#             */
/*   Updated: 2025/05/22 13:20:43 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*firstzombie = newZombie("HeapBiezom");
	
	firstzombie->announce();
	delete firstzombie;
	
	randomChump("StackBiezom");
	
	return 0;
}