# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperrein <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/07 12:06:20 by aperrein          #+#    #+#              #
#    Updated: 2023/08/18 17:33:32 by aperrein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	PhoneBook

OBJ_DIR		=	OBJ/

SRC			=	Contact.class.cpp PhoneBook.class.cpp main.cpp

OBJ			=	$(addprefix $(OBJ_DIR), $(SRC:.cpp=.o))

RM			=	rm -f

CFLAGS		=	-Wall -Werror -Wextra -std=c++98

all			:	$(OBJ_DIR) $(NAME)

$(OBJ_DIR)%.o:  $(SRC_DIR)%.cpp
				gcc $(CFLAGS) -c $< -o $@

$(OBJ_DIR)	:	
				mkdir $(OBJ_DIR)

$(NAME)		:	$(OBJ)
				g++	$(CFLAGS) -o $(NAME) $(OBJ)

clean		:
				$(RM) $(OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all
