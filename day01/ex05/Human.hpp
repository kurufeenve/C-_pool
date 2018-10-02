/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:33:47 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 16:33:48 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string> // just in case of deleting string from iostream
# include "Brain.hpp"

class	Human
{
	private:
		Brain	_brain;

	public:
		Brain	getBrain();
		const void	*identify(void);
};

# endif

