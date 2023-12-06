/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:40:57 by aperrein          #+#    #+#             */
/*   Updated: 2023/08/07 10:41:00 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
    int i;
    int j;

    i = 1;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (i < ac)
        {
            j = 0;
            while (av[i][j])
            {
                std::cout << (char) toupper(av[i][j++]);
            }
            std::cout << " ";
            i++;
        }
    }
    std::cout << std::endl;
    return 0;
}