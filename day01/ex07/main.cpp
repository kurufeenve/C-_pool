/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 19:32:35 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/02 19:32:36 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Sed.class.hpp"

int		main(int argc, char **argv)
{
	Sed				*sed;
	
	if (argc != 4)
	{
		std::cout << "wrong number of arguments." << std::endl;
		exit(0);
	}
	try
	{
		sed = new Sed(argv[1], argv[2], argv[3]);
	}
	catch(int e) {
		exit(0);
	}
	delete sed;
	return (0);
}
