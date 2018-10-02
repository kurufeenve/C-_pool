/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:53:00 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 12:53:01 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	randomChump(ZombieEvent event)
{
	Zombie		*zombie;
	std::string	names[] = {"sweet brains", "giant brains", "dick brains", "your mom's brains"};
	int			name;

	srand(time(NULL));
	name = rand() % 4;
	event.setZombieType(name);
	zombie = event.newZombie(names[name]);
	zombie->announce();
	delete(zombie);
}

int		main(void)
{
	ZombieEvent	event;

	randomChump(event);
	return (0);
}
