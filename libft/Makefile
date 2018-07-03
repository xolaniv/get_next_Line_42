# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xvilakaz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/07 10:43:51 by xvilakaz          #+#    #+#              #
#    Updated: 2018/06/18 11:14:27 by xvilakaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

INCLUDE		=./libft.h

SRC			= ./ft_memset.c\
			  ./ft_memccpy.c\
			  ./ft_putnbr.c\
			  ./ft_strequ.c\
			  ./ft_strnequ.c\
			  ./ft_memchr.c\
			  ./ft_putnbr_fd.c\
			  ./ft_striter.c\
			  ./ft_strnew.c\
			  ./ft_atoi.c\
			  ./ft_memcmp.c\
			  ./ft_putstr.c\
			  ./ft_striteri.c\
			  ./ft_strnstr.c\
			  ./ft_bzero.c\
			  ./ft_memcpy.c\
			  ./ft_putstr_fd.c\
			  ./ft_strjoin.c\
			  ./ft_strrchr.c\
			  ./ft_isalnum.c\
			  ./ft_memdel.c\
		  	  ./ft_strcat.c\
			  ./ft_strlcat.c\
			  ./ft_strsplit.c\
			  ./ft_isalpha.c\
			  ./ft_memmove.c\
			  ./ft_strchr.c\
			  ./ft_strlen.c\
			  ./ft_strstr.c\
			  ./ft_isascii.c\
			  ./ft_memset.c\
			  ./ft_strclr.c\
			  ./ft_strmap.c\
			  ./ft_strsub.c\
			  ./ft_isdigit.c\
			  ./ft_putchar.c\
			  ./ft_strcmp.c\
			  ./ft_strmapi.c\
			  ./ft_strtrim.c\
			  ./ft_isprint.c\
			  ./ft_putchar_fd.c\
			  ./ft_strcpy.c\
			  ./ft_strncat.c\
			  ./ft_tolower.c\
			  ./ft_itoa.c\
			  ./ft_putendl.c\
			  ./ft_strdel.c\
			  ./ft_strncmp.c\
			  ./ft_toupper.c\
			  ./ft_memalloc.c\
			  ./ft_putendl_fd.c\
			  ./ft_strdup.c\
			  ft_strncpy.c

OBJ			= ./*.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc -Wall -Werror -Wextra -c -I$(INCLUDE) $(SRC)
	
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
