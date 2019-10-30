# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/29 18:23:07 by fhenrion          #+#    #+#              #
#    Updated: 2019/06/12 18:33:14 by fhenrion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_NAME = atoi lstlast putchar strdup strnequ bzero lstmap putchar_fd strequ \
strnew isalnum lstmerge putendl striter strnstr isalpha lstnew putendl_fd \
striteri strrchr isascii lstreverse putnbr strjoin strsplit isdigit lstsize \
putnbr_fd strlcat strstr isprint memalloc putstr strlcpy strsub isspace \
memccpy putstr_fd strlen strtrim itoa memchr strcat strlowcase strupcase \
lstadd memcmp strchr strmap tolower lstat memcpy strclr strmapi toupper \
lstdel memdel strcmp strncat lstdelone memmove strcpy strncmp lstiter \
memset strdel strncpy strfreejoin strchrsub strchri lstadd_end

HDR_NAME = libft.h
DBG_NAME = libft_dbg.a
SRC = $(addprefix ft_,$(SRC_NAME))

C_SRC = $(addsuffix .c,$(SRC))
O_SRC = $(addsuffix .o,$(SRC))

CC = gcc
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME): $(C_SRC)
	@$(CC) $(CFLAGS) $(HDR_NAME) -c $^
	@ar rc $@ $(O_SRC)
	@ranlib $@

debug: $(C_SRC)
	@$(CC) $(CFLAGS) $(HDR_NAME) -c $^ -g
	@ar rc $(DBG_NAME) $(O_SRC)
	@ranlib $(DBG_NAME)

clean:
	@/bin/rm -f $(O_SRC)
	@/bin/rm -f libft.h.gch

fclean: clean
	@/bin/rm -f $(NAME)

dclean: clean
	@/bin/rm -f $(DBG_NAME)

re: fclean all

.PHONY: clean fclean all re
