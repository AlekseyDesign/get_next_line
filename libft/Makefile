# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 13:16:43 by jsprigga          #+#    #+#              #
#    Updated: 2018/12/12 12:49:05 by jsprigga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
SRCS =  ft_memalloc.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_memdel.c \
        ft_strcat.c \
        ft_strchr.c \
        ft_strclr.c \
        ft_strcpy.c \
        ft_strdel.c \
        ft_strdup.c \
        ft_strlen.c \
        ft_striter.c \
        ft_striteri.c \
        ft_strmap.c \
        ft_strncpy.c \
        ft_strnew.c \
        ft_strrchr.c \
        ft_atoi.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_strncmp.c \
        ft_strcmp.c \
        ft_strstr.c \
        ft_strnstr.c \
        ft_strncat.c \
        ft_strlcat.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_strequ.c \
        ft_strnequ.c \
        ft_strsub.c \
        ft_memmove.c \
        ft_strsplit.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_putchar.c \
        ft_putstr.c \
        ft_putendl.c \
        ft_putnbr.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_memset.c \
        ft_bzero.c \
        ft_memcpy.c \
        ft_memccpy.c \
        ft_lstnew.c \
        ft_lstdelone.c \
        ft_lstdel.c \
        ft_lstadd.c \
        ft_lstiter.c \
        ft_lstmap.c \
        ft_natural_pow.c \
		ft_sqrt.c \
		ft_sqrt_rational.c \
		ft_isin.c \
		ft_range.c

FLAGS = -Wall -Wextra -Werror -g
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): %.o: %.c
	gcc -c $(FLAGS) $< -o $@

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
