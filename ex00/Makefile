# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperrein <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 12:06:20 by aperrein          #+#    #+#              #
#    Updated: 2023/08/07 12:06:22 by aperrein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SRC		=	megaphone.cpp

RM		=	rm -f

CFLAGS	=	-Wall -Werror -Wextra -std=c++98

all		:	$(NAME)

$(NAME)	:
			g++	$(CFLAGS) -o $(NAME) $(SRC)

fclean	:
			$(RM) $(NAME)

re		:	fclean all