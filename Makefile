# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qrobert- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 12:16:01 by qrobert-          #+#    #+#              #
#    Updated: 2017/11/10 12:03:30 by qrobert-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c\
	ft_strlen.c ft_strcpy.c  ft_strdup.c  ft_strncpy.c ft_strstr.c\
	ft_strnstr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	ft_isprint.c ft_toupper.c ft_tolower.c ft_isupper.c ft_islower.c\
	ft_strchr.c ft_strrchr.c ft_memset.c ft_bzero.c ft_memcpy.c\
	ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c
INC_PATH = ./
SRC_PATH = ./
OBJ = $(FILES:.c=.o)
FLAGS = -Werror -Wextra -Wall

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
%.o: $(SRC_PATH)%.c
	gcc $(FLAGS) -I $(INC_PATH) -c $<

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
