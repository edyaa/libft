# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kblaze <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 13:00:47 by kblaze            #+#    #+#              #
#    Updated: 2020/11/22 16:11:17 by kblaze           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_strlcat.c \
	  ft_strtrim.c ft_bzero.c ft_memccpy.c ft_putendl_fd.c \
	  ft_strlcpy.c ft_substr.c ft_calloc.c ft_memchr.c	\
	  ft_putnbr_fd.c ft_strlen.c ft_tolower.c ft_isalnum.c \
	  ft_memcmp.c ft_putstr_fd.c ft_strmapi.c ft_toupper.c \
	  ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strncmp.c \
	  ft_isascii.c ft_memmove.c ft_strdup.c  ft_itoa.c ft_strnstr.c\
	  ft_isdigit.c ft_memset.c ft_strjoin.c ft_strrchr.c ft_split.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

all: $(NAME)

%.o: %.c $(HEADER)
	@gcc $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
