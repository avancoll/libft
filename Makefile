# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 18:22:00 by avancoll          #+#    #+#              #
#    Updated: 2022/10/07 12:04:10 by avancoll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_memset ft_bzero ft_memcpy ft_memmove ft_memchr ft_memcmp ft_strlen \
		ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper \
		ft_tolower ft_strchr ft_strrchr ft_strncmp ft_strlcpy ft_strlcat \
		ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim \
		ft_split ft_itoa ft_strmapi ft_striteri ft_putchar_fd ft_putstr_fd \
		ft_putendl_fd ft_putnbr_fd

SRCS	= $(addsuffix .c, $(FILES))

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

RM		= rm -f

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
