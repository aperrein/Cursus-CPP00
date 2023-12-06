/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:21:42 by aperrein          #+#    #+#             */
/*   Updated: 2023/08/18 16:22:21 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <stdlib.h>
#include "Contact.class.hpp"

class PhoneBook {

private:

    Contact     _contacts[8];
    void        print_index(int i) const;
    int         is_not_number(const char *s) const;
    int         is_not_good(const char *s) const;
    std::string recup_info(std::string r) const;

public:

    PhoneBook();
    ~PhoneBook();

    void        print_contact(void) const;
    void        choose_contact(void);
    void        add_contact(int i);
    std::string trunc_str(std::string s) const;
    std::string clear_tab(std::string s) const;
    
};

#endif
