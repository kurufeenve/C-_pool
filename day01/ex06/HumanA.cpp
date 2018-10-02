/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:24:34 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 18:24:35 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : _weapon(wp)
{
	this->_name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << "with his" << this->_weapon.getType() << std::endl;
}