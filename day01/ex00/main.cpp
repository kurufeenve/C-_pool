/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 11:21:17 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 11:21:19 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
# include <iostream>
# include <string> 

void	ponyOnTheStack()
{
	Pony	pony = Pony();
	print << nl;
}

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony();
	print << nl;
	delete (pony);
}

int		main(void)
{
	ponyOnTheStack();
	print << nl;
	ponyOnTheHeap();

	return (0);
}
