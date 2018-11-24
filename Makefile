# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmousson <mmousson@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 09:54:12 by mmousson          #+#    #+#              #
#    Updated: 2018/11/23 19:58:15 by mmousson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	./src/attributes.c \
		./src/dispatcher.c \
		./src/flags_conversions.c \
		./src/format_output.c \
		./src/ft_int_aux.c \
		./src/ft_int.c \
		./src/ft_octal.c \
		./src/ft_octal_aux.c \
		./src/ft_printf.c \
		./src/ft_put_pointer.c \
		./src/ft_putfloat.c \
		./src/put_hexa_aux.c \
		./src/put_hexa.c \
		./src/putchar.c \
		./src/putfloat_aux.c \
		./src/putfloat_main.c \
		./src/putstr.c \
		./src/unsigned_int_aux.c \
		./src/unsigned_int.c

OBJS = $(notdir $(SRCS:.c=.o))

FLAG = -Wextra -Wall -Werror -I./includes -I./libft

all : $(NAME)

$(NAME) : $(SRCS)
	$(MAKE) -C libft/
	gcc -c $(FLAG) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean :
	rm -rf $(OBJS)
	$(MAKE) -C libft/ clean

fclean : clean
	rm -rf $(NAME)
	$(MAKE) -C libft/ fclean

re : fclean all

.PHONY : all clean fclean re