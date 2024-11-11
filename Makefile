# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysuliman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/08 16:14:06 by ysuliman          #+#    #+#              #
#    Updated: 2024/11/10 19:46:57 by ysuliman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftpush_swap.a
EXEC		= push_swap

LIBFT		= ./libft/libft.a
LIBFTDIR	= ./libft

SRC			= ./files

PUSH_SWAP_SRCS	= ft_check_sort.c utils.c push_swap.c ft_countspaces.c operations.c ft_sort.c sort_big_stack.c ft_sort_5.c\

OBJS		= $(PUSH_SWAP_SRCS:.c=.o)

CC			= cc 
AR			= ar rcs
RM			= rm -rf 
CFLAGS		= -Wall -Wextra -Werror -g
CP			= cp

all:		$(NAME) $(EXEC)

$(NAME):	$(LIBFT) $(OBJS)
				$(CP) $(LIBFT) $(NAME)
				@$(AR) $(NAME) $(OBJS)

$(EXEC):    $(OBJS)
				$(CC) $(CFLAGS) -o $(EXEC) push_swap.c -L. -lftpush_swap -I./includes -L./libft -lft
				
$(LIBFT):	$(LIBFTDIR)
				@$(MAKE) -C $(LIBFTDIR)

%.o: 		$(SRC)/%.c
				@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(MAKE) clean -C $(LIBFTDIR)
			@$(RM) $(OBJS)

fclean:		clean
				@$(MAKE) fclean -C $(LIBFTDIR)
				@$(RM) $(NAME) $(EXEC)

re:			fclean all

.PHONY:		all clean fclean re
