/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:30:15 by aperrein          #+#    #+#             */
/*   Updated: 2023/08/18 17:31:19 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main(void)
{
    PhoneBook       book;
    std::string     command;
    int             i;

    i = -1;
    while (!std::cin.eof())
    {
        std::cout << "Please enter a command (SEARCH / ADD / EXIT)\n> ";
        std::getline(std::cin, command);
        if (command == "EXIT")
            return (0);
        else if (command == "ADD")
        {    
            i++;
            i = i % 8;
            std::cout << "Adding contact number " << i+1 << "\n";
            book.add_contact(i);
        }
        else if (command == "SEARCH")
            {
            std::cout << "Searching contact\n";
            book.print_contact();
            book.choose_contact();
            }
        else
            if (!std::cin.eof())
                std::cout << "Only ADD, SEARCH and EXIT commands are accepted\n";
    }

    return (0);
}
