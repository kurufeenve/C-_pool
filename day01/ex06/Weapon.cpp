/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:25:08 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 18:25:09 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void				Weapon::setType(std::string tp)
{
	this->type = tp;
}

const std::string	Weapon::getType(void)
{
	const std::string &ref = this->type;
	return (ref);
}
