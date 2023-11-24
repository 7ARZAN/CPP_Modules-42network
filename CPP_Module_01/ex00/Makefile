# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 06:43:01 by elakhfif          #+#    #+#              #
#    Updated: 2023/10/20 09:51:09 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

INC = Zombie.hpp

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie

RM = rm -f

all: $(NAME)


CLR_RMV:= \033[0m
RED:= \033[1;31m
GREEN:= \033[1;32m
YELLOW:= \033[1;33m
BLUE:= \033[1;34m
CYAN:= \033[1;36m

$(NAME): $(OBJ) $(INC)
	@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)
	@echo "$(BLUE)Compilation of ${YELLOW}$(NAME) $(RED)BY 7ARZAN ..."
	@echo "$(GREEN)HAK HAHOWA $(YELLOW)$(NAME) $(GREEN)M9AD  ✔️"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)7ARZAN $(CYAN)GALIK MSA7 $(GREEN)L7ZA9 ✔️"

re : fclean all
