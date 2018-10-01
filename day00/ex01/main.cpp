/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:35:43 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/01 12:35:53 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.class.hpp"

int		main(void)
{
	int			i = 0;
	std::string command;
	User		user[8];

	std::cout << "ADD - add new user" << std::endl;
	std::cout << "SEARCH - search user" << std::endl;
	std::cout << "EXIT - erase all contacts and exit the program" << std::endl;

	while (command.compare("EXIT"))
	{
		std::cout << "Type your command: ";
		std::cin >> command;
		if (i >= 8)
			std::cout << "Oh, Sir, it seems that the phonebook is full. You can\
cry in the corner now." << std::endl;
		if (!command.compare("ADD"))
		{
			user[i].addNewUser();
			std::cout << std::endl << "New User added." << std::endl << std::endl; 
			i++;
		}
		if (!command.compare("SEARCH"))
		{
			std::cout << "|" << std::setw(10) << "INDEX" << "|"
			<< std::setw(10) << "First Name" << "|" << std::setw(10)
			<< "Last Name" << "|" << std::setw(10) << "NickName" << "|"
			<< std::endl;
			for (int j = 0; j < i; j++)
			{
				std::cout << "|" << std::setw(10) << (j + 1) << "|";
				user[j].searchUser();
				std::cout << std::endl;
			}
			std::cin >> command;
			int j = atoi(command.c_str()) - 1;
			if (j >= 0 && j < i)
				user[j].showUser();
		}
	}
	return (0);
}
