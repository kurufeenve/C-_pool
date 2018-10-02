/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 12:52:32 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 12:52:33 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string> // just in case of deleting string from iostream

# define print std::cout
# define nl std::endl

class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		std::string	name;
		int			type;
		void	announce(void);
};

# endif
