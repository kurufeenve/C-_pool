/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:52:24 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 12:52:25 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	print << "New zombie is constructed" << nl;
	return ;
}

Zombie::~Zombie(void)
{
	print << "Zombie was destructed" << nl;
	return ;
}

void	Zombie::announce(void)
{
	print << "<" << this->name << " (" << this->type <<
	")> Braiiiiiiinnnssss..." << nl;
}
