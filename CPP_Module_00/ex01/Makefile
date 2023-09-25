# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/25 18:42:45 by elakhfif          #+#    #+#              #
#    Updated: 2023/09/25 20:37:27 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = PhoneBook.cpp Contact.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror #-std=c++98 -pedantic

INC = Contact.hpp phonebook.hpp

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
