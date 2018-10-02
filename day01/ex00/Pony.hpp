/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:21:38 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 11:21:40 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string> // just in case of deleting string from iostream

# define print std::cout
# define nl std::endl

class	Pony
{
	public:
		Pony(void);
		~Pony(void);
		std::string name;
		int			legs;
		int			color;
		bool		unicorne;
		bool		dead;
};

# endif
