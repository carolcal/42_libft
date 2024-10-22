# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cayamash <cayamash@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 15:38:33 by cayamash          #+#    #+#              #
#    Updated: 2024/10/22 16:12:38 by cayamash         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_isalpha ft_isdigit ft_isalnum ft_isascii\
		ft_isprint ft_toupper ft_tolower ft_bzero\
		ft_strncmp ft_strlen ft_strlcpy ft_strlcat\
		ft_strchr ft_strrchr ft_strnstr ft_strdup\
		ft_memcmp ft_memset ft_memmove ft_memchr\
		ft_atoi ft_calloc ft_itoa ft_split ft_striteri\
		ft_substr ft_strjoin ft_strtrim ft_strmapi\
		ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
