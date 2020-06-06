# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    					          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/12 12:34:06 by linfan            #+#    #+#              #
#    Updated: 2019/06/17 16:17:57 by fhenrion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

NAME		=	fillit

LIBRARY		=	libft/libft.a

SOURCES		=	fillit.c file.c pieces.c position.c utils.c

OBJECTS		=	$(SOURCES:.c = .o)

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBRARY)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo $(GREEN)  [√]     [Program Successfully Compiled!]
$(LIBRARY):
	@make -C libft/

clean:
	@make clean -C libft/

fclean: clean
	@rm -f libft/libft.a
	@rm -f $(NAME)

re: fclean all

GREEN = "\033[1;32m"
