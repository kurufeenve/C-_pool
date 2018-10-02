/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:25:16 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 18:25:18 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string> // just in case of deleting string from iostream

class	Weapon
{
	private:
		std::string			type;

	public:
		Weapon(std::string);
		void				setType(std::string tp);
		const std::string	getType(void);
};

# endif

