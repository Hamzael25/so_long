# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/24 12:32:15 by hel-ouar          #+#    #+#              #
#    Updated: 2023/01/09 17:04:39 by hel-ouar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_check_so_long.c ft_check_exit_so_long.c ft_get_map_so_long.c\
		main_so_long.c ft_utils_so_long.c ft_move1_so_long.c ft_move2_so_long.c\
		ft_move3_so_long.c ft_anim_so_long.c ft_check_move_so_long.c\
		ft_loop_so_long.c ft_init_so_long.c ft_destroy.c ft_anim_diag_so_long.c\
		ft_double_move1_so_long.c ft_double_move2_so_long.c\
		ft_double_move3_so_long.c ft_move_direction.c\
		ft_do_double_move_so_long.c ft_do_check_move_so_long.c
		
OBJS = $(SRCS:.c=.o)
NAME = so_long
HEAD = so_long.h 
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

%.o: %.c Makefile ${HEAD}
		${CC} ${FLAGS} -Imlx -ILibft -c $< -o $@
	
all: mlx Libft
	make $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -Lmlx -lmlx -framework OpenGL -framework AppKit Libft/libft.a -o $(NAME)
	
clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C Libft/
	$(MAKE) clean -C mlx/
	
Libft : 
	$(MAKE) -C Libft

mlx : 
	$(MAKE) -C mlx
	
fclean: clean
	$(MAKE) fclean -C Libft/
	$(RM) $(NAME)
	
re: fclean
	make all

.PHONY: all clean fclean re Libft mlx