/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:33:06 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 16:33:07 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string> // just in case of deleting string from iostream


class	Brain
{
	private:
		const void	*_address;

	public:
		Brain();
		const void	*identify(void);
		
};

# endif
