# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juanmar2 <@student.42barcelona.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 18:10:13 by juanmar2          #+#    #+#              #
#    Updated: 2024/10/14 18:30:47 by juanmar2         ###   ########.fr        #
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
       ft_strlcat.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strncmp.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_itoa.c \
       ft_strmapi.c \
       st_striteri.c \
       ft_putchar_fd.c

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

