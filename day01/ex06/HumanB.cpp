/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:24:50 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 18:24:51 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void	HumanB::attack(void)
{
	if (this->_weapon) // if we do not check this->_weapon in case the weapon is not set we will ge segfault
		std::cout << this->_name << "with his" << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp)
{
	this->_weapon = &wp;
}
