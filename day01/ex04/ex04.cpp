/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 16:25:08 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 16:25:10 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *pstr = &str;
	std::string &str_ref = str;

	std::cout << *pstr << "\n" << str_ref << std::endl;

	return 0;
}

