# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 02:29:00 by elakhfif          #+#    #+#              #
#    Updated: 2023/11/24 03:34:01 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = REF_PTR_STR

RM = rm -f

all: $(NAME)


CLR_RMV:= \033[0m
RED:= \033[1;31m
GREEN:= \033[1;32m
YELLOW:= \033[1;33m
BLUE:= \033[1;34m
CYAN:= \033[1;36m

$(NAME): $(OBJ)
	@$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)
	@echo "$(BLUE)Compilation of ${YELLOW}$(NAME) $(RED)BY 7ARZAN ..."
	@echo "$(GREEN)HAK HAHOWA $(YELLOW)$(NAME) $(GREEN)M9AD  ✔️"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)7ARZAN $(CYAN)GALIK MSA7 $(GREEN)L7ZA9 ✔️"

re : fclean all
