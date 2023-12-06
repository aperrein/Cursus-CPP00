/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:23:23 by aperrein          #+#    #+#             */
/*   Updated: 2023/08/18 16:25:19 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.class.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string     Contact::get_firstname(void) const
{
    return (this->_firstname);
}

std::string     Contact::get_lastname(void) const
{
    return (this->_lastname);
}

std::string     Contact::get_nickname(void) const
{
    return (this->_nickname);
}

std::string     Contact::get_phonenumber(void) const
{
    return (this->_phonenumber);
}

std::string     Contact::get_darksecret(void) const
{
    return (this->_darksecret);
}

void    Contact::set_firstname(std::string s)
{
    this->_firstname = s;
}

void    Contact::set_lastname(std::string s)
{
    this->_lastname = s;
}

void    Contact::set_nickname(std::string s)
{
    this->_nickname = s;
}

void    Contact::set_phonenumber(std::string s)
{
    this->_phonenumber = s;
}

void    Contact::set_darksecret(std::string s)
{
    this->_darksecret = s;
}
