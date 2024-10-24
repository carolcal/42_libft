# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 15:38:33 by cayamash          #+#    #+#              #
#    Updated: 2024/10/23 18:25:07 by cayamash         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_isprint.c ft_toupper.c ft_tolower.c ft_bzero.c\
		ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c\
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c\
		ft_memcmp.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c\
		ft_atoi.c ft_calloc.c ft_itoa.c ft_split.c ft_striteri.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_ls

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%o: %c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
