/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 13:57:51 by vordynsk          #+#    #+#             */
/*   Updated: 2018/10/01 13:57:55 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
# include <iomanip>

// nice idea but don't know if it will work for the pool
# define print std::cout
# define nl std::endl

class	User
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _login;
		std::string _postalAddress;
		std::string _emailAddress;
		std::string _phoneNumber;
		std::string _birthdayDate;
		std::string _favoriteMeal;
		std::string _underwearColor;
		std::string _darkestSecret;

	public:
		User(void);
		~User(void);
		void		addNewUser(void);
		void		showUser(void);
		void		searchUser(void);
		void		setFirstName(std::string);
		void		setLastName(std::string);
		void		setNickName(std::string);
		void		setLogin(std::string);
		void		setPostalAddress(std::string);
		void		setEmailAddress(std::string);
		void		setPhoneNumber(std::string);
		void		setBirthdayDate(std::string);
		void		setFavoriteMeal(std::string);
		void		setUnderwearColor(std::string);
		void		setDarkestSecret(std::string);
};

# endif
