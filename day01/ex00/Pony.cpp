/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:21:29 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 11:21:33 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	this->name = "Fluttershy";
	this->legs = 4;
	this->color = 0xFFFFE0;
	this->unicorne = false;
	this->dead = false;
	print << "Name: " << this->name << nl << "Legs: " << this->legs << nl
	<< "Color: " << std::hex << this->color << nl << "Unicorne: " <<
	this->unicorne << nl << "Dead? " << this->dead << nl;
	return ;
}

Pony::~Pony(void)
{
	this->dead = true;
	print << "Dead? " << this->dead << nl;
	return ;
}
