/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 13:57:30 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/01 13:57:37 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.class.hpp"

User::User(void) { return ; }
User::~User(void) { return ; }

void		User::addNewUser(void)
{
	std::string	data;

	std::cout << "First Name: ";
	std::cin >> data;
	this->setFirstName(data);
	std::cout << "Last Name: ";
	std::cin >> data;
	this->setLastName(data);
	std::cout << "Nickname: ";
	std::cin >> data;
	this->setNickName(data);
	std::cout << "Login: ";
	std::cin >> data;
	this->setLogin(data);
	std::cout << "Postal Address: ";
	std::cin >> data;
	this->setPostalAddress(data);
	std::cout << "Email Address: ";
	std::cin >> data;
	this->setEmailAddress(data);
	std::cout << "Phone Number: ";
	std::cin >> data;
	this->setPhoneNumber(data);
	std::cout << "Birthday Date: ";
	std::cin >> data;
	this->setBirthdayDate(data);
	std::cout << "Favorite Meal: ";
	std::cin >> data;
	this->setFavoriteMeal(data);
	std::cout << "Underwear Color: ";
	std::cin >> data;
	this->setUnderwearColor(data);
	std::cout << "Darkest Secret: ";
	std::cin >> data;
	this->setDarkestSecret(data);
}

void		User::showUser(void)
{
	std::cout << "First Name: " << this->_firstName << std::endl
	<< "Last Name: " << this->_lastName << std::endl
	<< "Nickname: " << this->_nickName << std::endl
	<< "Login: " << this->_login << std::endl
	<< "Postal Address: " << this->_postalAddress << std::endl
	<< "Email Address: " << this->_emailAddress << std::endl
	<< "Phone Number: " << this->_phoneNumber << std::endl
	<< "Birthday Date: " << this->_birthdayDate << std::endl
	<< "Favorite Meal: " << this->_favoriteMeal << std::endl
	<< "Underwear Color: " << this->_underwearColor << std::endl
	<< "Darkest Secret: " << this->_darkestSecret << std::endl;
}

void		User::searchUser(void)
{
	if (this->_firstName.length() > 10)
	{
		std::cout << this->_firstName.substr(0, 9);
		std::cout << ".|";
	}
	else
	{
		std::cout << std::setw(10) << this->_firstName << "|";
	}
	if (this->_lastName.length() > 10)
	{
		std::cout << this->_lastName.substr(0, 9);
		std::cout << ".|";
	}
	else
	{
		std::cout << std::setw(10) << this->_lastName << "|";
	}
	if (this->_nickName.length() > 10)
	{
		std::cout << this->_nickName.substr(0, 9);
		std::cout << ".|";
	}
	else
	{
		std::cout << std::setw(10) << this->_nickName << "|";
	}
}

void		User::setFirstName(std::string str)
{
	this->_firstName = str;
	return ;
}

void		User::setLastName(std::string str)
{
	this->_lastName = str;
	return ;
}

void		User::setNickName(std::string str)
{
	this->_nickName = str;
	return ;
}

void		User::setLogin(std::string str)
{
	this->_login = str;
	return ;
}

void		User::setPostalAddress(std::string str)
{
	this->_postalAddress = str;
	return ;
}

void		User::setEmailAddress(std::string str)
{
	this->_emailAddress = str;
	return ;
}

void		User::setPhoneNumber(std::string str)
{
	this->_phoneNumber = str;
	return ;
}

void		User::setBirthdayDate(std::string str)
{
	this->_birthdayDate = str;
	return ;
}

void		User::setFavoriteMeal(std::string str)
{
	this->_favoriteMeal = str;
	return ;
}

void		User::setUnderwearColor(std::string str)
{
	this->_underwearColor = str;
	return ;
}

void		User::setDarkestSecret(std::string str)
{
	this->_darkestSecret = str;
	return ;
}
