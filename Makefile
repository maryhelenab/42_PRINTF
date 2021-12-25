# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maryhelen <maryhelen@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 18:26:59 by malbuque          #+#    #+#              #
#    Updated: 2021/12/25 18:50:55 by maryhelen        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		printf.a
#Nome do project

SRCS = 		ft_printf.c \
			ft_check_arg.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_pointer.c \
			ft_strlen.c \
			ft_base.c #\
			ft_printf_utils_char.c \
			ft_printf_utils_hex.c \
			ft_printf_utils_num.c \
			ft_printf_utils.c

#Objs arquivos transforma .c (files) em .o (objtos)
OBJS = 		$(SRCS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -I.
# -I (incluir) Especifica um diretório para pesquisar os makefiles incluídos
RM			= rm -f
# -rm remover arquivos tudo de raiz
# -f ignore arquivos e argumentos inexistentes, nunca pergunte

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
