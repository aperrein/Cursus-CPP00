/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:25:45 by aperrein          #+#    #+#             */
/*   Updated: 2023/08/18 16:26:15 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
    int     j = 0;

    while (j <= 7)
    {
        this->_contacts[j].set_firstname("");
        this->_contacts[j].set_lastname("");
        this->_contacts[j].set_nickname("");
        this->_contacts[j].set_phonenumber("");
        this->_contacts[j].set_darksecret("");
        j++;
    }
    std::cout << "Creating PhoneBook\n";
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "PhoneBook deleted !\n";
}

void        PhoneBook::add_contact(int i)
{
    std::cout << "Firstname : ";
    this->_contacts[i].set_firstname(recup_info("Firstname : "));
    std::cout << "Lastname : ";
    this->_contacts[i].set_lastname(recup_info("Lastname : "));
    std::cout << "Nickname : ";
    this->_contacts[i].set_nickname(recup_info("Nickname : "));
    std::cout << "Phone number : ";
    this->_contacts[i].set_phonenumber(recup_info("Phone number : "));
    std::cout << "Darkest secret : ";
    this->_contacts[i].set_darksecret(recup_info("Darkest secret : "));
    
}

std::string     PhoneBook::recup_info(std::string r) const
{
    std::string     s = "";

    while (!std::cin.eof())
    {
        std::getline(std::cin, s);
        if (s == "" || is_not_good(s.c_str()))
        {
            std::cout << "You must fill the contact\n" << r;
        }
        else
            return (clear_tab(s));
    }
    return (clear_tab(s));
}

void    PhoneBook::print_contact(void) const
{
    int     j = 0;

    std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nick Name";
    std::cout << std::endl;
    while (j <= 7)
    {
        std::cout << std::right << std::setw(10) << j+1;
        std::cout << "|";
        std::cout << std::right << std::setw(10) << trunc_str(this->_contacts[j].get_firstname());
        std::cout << "|";
        std::cout << std::right << std::setw(10) << trunc_str(this->_contacts[j].get_lastname());
        std::cout << "|";
        std::cout << std::right << std::setw(10) << trunc_str(this->_contacts[j].get_nickname());
        std::cout << std::endl;
        j++;
    }
}

void    PhoneBook::choose_contact(void)
{
    std::string     s;
    int             i;

    std::cout << "Please enter the contact index of your choice \n> ";
    while (!std::cin.eof())
    {
        i = 0;
        std::getline(std::cin, s);
        i = atoi (s.c_str());
        if (i <= 0 || i >= 9 || is_not_number(s.c_str()))
        {
            if (!std::cin.eof())
                std::cout << "Please enter a correct index\n> ";
        }
        else
        {
            print_index(i - 1);
            return;
        }
    }

}

void    PhoneBook::print_index(int i) const
{
    std::cout << "Firstname : " << this->_contacts[i].get_firstname();
    std::cout << std::endl;
    std::cout << "Lastname : " << this->_contacts[i].get_lastname();
    std::cout << std::endl;
    std::cout << "Nickname : " << this->_contacts[i].get_nickname();
    std::cout << std::endl;
    std::cout << "Phone number : " << this->_contacts[i].get_phonenumber();
    std::cout << std::endl;
    std::cout << "Darkest secret : " << this->_contacts[i].get_darksecret();
    std::cout << std::endl;
}

int     PhoneBook::is_not_number(const char *s) const
{
    int     j = 0;

    while (s[j])
    {
        if (!isdigit(s[j]))
            return (1);
        j++;
    }
    return (0);
}

int     PhoneBook::is_not_good(const char *s) const
{
    int     j = 0;

    while(s[j])
    {
        if (!isspace(s[j]))
            return (0);
        j++;
    }
    return (1);
}

std::string PhoneBook::trunc_str(std::string s) const
{
    if (s.length() <= 10)
        return (s);
    else
        return (s.substr(0, 9) + ".");
}

std::string PhoneBook::clear_tab(std::string s) const
{
    int j = 0;
    std::string res = "";

    while (s[j])
    {
        if (s[j] == '\t')
            res += ' ';
        else
            res += s[j];
        j++;
    }
    return (res);
}