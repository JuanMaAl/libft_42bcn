# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 18:10:13 by juanmar2          #+#    #+#              #
#    Updated: 2024/10/02 20:04:01 by juanmar2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES #

NAME = 	libft.a

# SOURCES #

SRC = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_strlen.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcpy.c \
       ft_strlcat.c

# OBJECTS #

OBJ = $(SRC:.c=.o)

# RULES #

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) 

$(OBJ): $(SRC) libft.h
	cc -Wall -Wextra -Werror -c $(SRC) libft.h

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ)
	rm -f $(NAME)
re:
	rm -f $(OBJ)
	rm -f $(NAME)
	make
