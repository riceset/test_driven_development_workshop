# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 11:44:09 by tkomeno           #+#    #+#              #
#    Updated: 2022/10/29 01:50:56 by tkomeno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	tdd

LIBFT_PATH	=	./libraries/libft
FT_PRINTF_PATH	=	./libraries/ft_printf

INCLUDES	=	-I includes -I $(LIBFT_PATH)/includes -I $(FT_PRINTF_PATH)/includes

CFLAGS		=	-Wall -Werror -Wextra $(INCLUDES)

LIBS_PATH	=	-L$(LIBFT_PATH) -L$(FT_PRINTF_PATH)

LIBS		=	-lft -lftprintf

FILES 		=	main.c \
				abs.c

SRCS		=	$(addprefix sources/,$(FILES))

OBJS		=	$(SRCS:.c=.o)

CC		=	clang

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_PATH)
	$(MAKE) -C $(FT_PRINTF_PATH)
	$(CC) $(OBJS) -o $(NAME) $(LIBS_PATH) $(LIBS)

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C $(LIBFT_PATH)
	$(MAKE) clean -C $(FT_PRINTF_PATH)

fclean:
	$(RM) $(OBJS) $(NAME)
	$(MAKE) fclean -C $(LIBFT_PATH)
	$(MAKE) fclean -C $(FT_PRINTF_PATH)

re: fclean all

.PHONY: all clean fclean re
