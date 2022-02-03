#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aigarcia <aigarcia@student.42barc...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 09:10:09 by aigarcia          #+#    #+#              #
#    Updated: 2022/02/02 11:12:24 by marvin           ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft.a

CFLAGS = -Wall -Werror -Wextra
RM = rm -f
FILES  =  ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c
OBJS = $(FILES:.c=.o)
HEADER = libft.h

.c.o:
		gcc $(CFLAGS) -g -c $< -o $(<:.c=.o)

all: ${NAME}

${NAME}: $(OBJS)
		ar -rcs ${NAME} ${OBJS}

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) ${NAME}

re: fclean all

.PHONY: all clean fclean re
