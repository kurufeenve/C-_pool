/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:50:24 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 14:50:25 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string> // just in case of deleting string from iostream
# include "Zombie.hpp"

class	ZombieHorde
{
	private:
		Zombie	*_horde;
		int		_numberOfZombies;

	public:
		ZombieHorde(int N);
		~ZombieHorde();
		void	announce(void);

};

# endif
