# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aonaci <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/15 13:42:53 by aonaci            #+#    #+#              #
#    Updated: 2015/11/16 15:47:32 by aonaci           ###   ########.fr        #
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
	  ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_isdigit.c

OBJ = ft_putchar.o ft_strstr.o ft_strnstr.o ft_strncpy.o ft_strcat.o \
	  ft_strncmp.o ft_strncat.o ft_strlen.o ft_strlcat.o ft_strcpy.o \
	  ft_strcmp.o ft_strcat.o ft_strncmp.o ft_strncat.o ft_strlen.o \
	  ft_strlcat.o ft_strcpy.o ft_strcmp.o ft_strcat.o ft_memset.o \
	  ft_putstr.o ft_bzero.o ft_memcpy.o ft_strdup.o ft_strchr.o \
	  ft_memccpy.o ft_memmove.o ft_atoi.o ft_tolower.o ft_toupper.o \
	  ft_isprint.o ft_isascii.o ft_isalnum.o ft_isalpha.o ft_isdigit.o

all: $(NAME)

$(NAME):
	gcc  $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
