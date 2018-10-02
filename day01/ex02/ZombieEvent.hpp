/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:52:50 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 12:52:51 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <string> // just in case of deleting string from iostream
# include "Zombie.hpp"

# define print std::cout
# define nl std::endl

class	ZombieEvent
{
	public:
		int		zombieType;
		void	setZombieType(int type);
		Zombie	*newZombie(std::string name);
};

# endif
