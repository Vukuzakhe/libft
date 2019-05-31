# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/28 13:44:00 by vmabuza           #+#    #+#              #
#    Updated: 2019/05/31 15:45:37 by vmabuza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_strcat.c ft_strlcat.c\
	  ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_strrchr.c\
	  ft_atoi.c ft_isdigit.c ft_memcpy.c ft_strcmp.c ft_strncat.c\
	  ft_strstr.c ft_bzero.c ft_isprint.c ft_memmove.c ft_strcpy.c\
	  ft_strncmp.c ft_tolower.c ft_isalnum.c ft_memccpy.c ft_memset.c\
	  ft_strdup.c ft_strncpy.c ft_toupper.c

OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
