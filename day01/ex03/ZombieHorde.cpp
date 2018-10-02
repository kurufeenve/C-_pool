/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:50:15 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 14:50:16 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	this->_numberOfZombies = N;
	if (N <= 0)
		std::cout << "There is no horde" << std::endl;
	else
	{
		std::string	names[] = {"Nola", "Shalon", "Asuncion", "your mom's brains",
		"Evalyn", "Shawn", "Quinton", "Shakita", "Omar", "Micheal", "Harriett", 
		"Kayce", "Matthew", "Jutta", "Sudie", "Moises", "Dena", "Krystin"};

		this->_horde = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			this->_horde[i].type = rand() % 18;
			this->_horde[i].name = names[this->_horde[i].type];
		}
	}
}

ZombieHorde::~ZombieHorde()
{
	if (this->_numberOfZombies > 0)
		delete [] this->_horde;
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_numberOfZombies; i++)
		this->_horde[i].announce();
}
