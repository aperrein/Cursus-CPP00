/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:15:28 by aperrein          #+#    #+#             */
/*   Updated: 2023/08/18 16:21:14 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONSTACT_CLASS_HPP

# include <iostream>
# include <iomanip>

class Contact {

private:

    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darksecret;

public:

    Contact();
    ~Contact();

    std::string get_firstname(void) const;
    std::string get_lastname(void) const;
    std::string get_nickname(void) const;
    std::string get_phonenumber(void) const;
    std::string get_darksecret(void) const;
    void        set_firstname(std::string s);
    void        set_lastname(std::string s);
    void        set_nickname(std::string s);
    void        set_phonenumber(std::string s);
    void        set_darksecret(std::string s);

};

#endif
