/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:33:37 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 16:33:38 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain	Human::getBrain()
{
	return (this->_brain);
}

const void	*Human::identify(void)
{
	return (this->_brain.identify());
}
