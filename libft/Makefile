# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aonaci <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/15 13:42:53 by aonaci            #+#    #+#              #
#    Updated: 2015/11/20 21:40:38 by aonaci           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
FLAG = -Wall -Werror -Wextra
OPTION = -c -I $(HEADER)
SRC = ft_putchar.c ft_strstr.c ft_strnstr.c ft_strncpy.c ft_strcat.c \
	  ft_strncmp.c ft_strncat.c ft_strlen.c ft_strlcat.c ft_strcpy.c \
	  ft_strcmp.c ft_strcat.c ft_strncmp.c ft_strncat.c ft_strlen.c \
	  ft_strlcat.c ft_strcpy.c ft_strcmp.c ft_strcat.c ft_memset.c \
	  ft_putstr.c ft_bzero.c ft_memcpy.c ft_strdup.c ft_strchr.c \
	  ft_memccpy.c ft_memmove.c ft_atoi.c ft_tolower.c ft_toupper.c \
	  ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c \
	  ft_memcmp.c ft_memchr.c ft_strrchr.c

OBJ = $(SRC:.c=.o)

$(NAME): libft.h
		gcc  $(FLAG) $(OPTION) $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
