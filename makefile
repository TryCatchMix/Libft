# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amunoz-g <amunoz-g@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 11:33:40 by amunoz-g          #+#    #+#              #
#    Updated: 2022/04/26 11:56:04 by amunoz-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ${wildcard ft_*.c}

OBJS	= ${SRCS:.c=o}

TARGET	= libft.a
CC				= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: ${Target}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${TARGET}: ${OBJS}
	ar -rc &{TARGET} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${TARGET}

re: fclean all

.PHONY: all clean fclean re

