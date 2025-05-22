/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmafueni <jmafueni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:44:42 by jmafueni          #+#    #+#             */
/*   Updated: 2025/05/20 13:35:59 by jmafueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string weapon)
{
	this->type = weapon;
}
Weapon::~Weapon()
{
	
}
std::string const &	Weapon::getType()
{
   return this->type;
}
void	Weapon::setType(std::string newType)
{
	this->type = newType;
}