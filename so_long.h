/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:45:52 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/10 17:10:59 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include "mlx.h"
# include "libft.h"

typedef struct s_s
{
	int	cpt;
	int	size;
	int	p;
	int	e;
	int	c;
}				t_s;

typedef struct s_mlx
{
	t_s		count;
	void	*mlx;
	void	*mlx_win;
	void	*character;
	void	*left;
	void	*right;
	void	*back;
	void	*bubble;
	void	*victory;
	void	*character2;
	void	*walk_back;
	void	*walk_back2;
	void	*walk_front;
	void	*walk_front2;
	void	*walk_left;
	void	*walk_left2;
	void	*walk_right;
	void	*walk_right2;
	void	*water;
	void	*floor;
	void	*item;
	void	*exit;
	int		img_width;
	int		img_height;
	char	**split;
	char	*map;
	char	*nbr_move;
	int		x;
	int		y;
	int		i;
	int		j;
	int		x2;
	int		y2;
	int		px;
	int		py;
	int		ey;
	int		ex;
	int		move_up;
	int		move_low;
	int		move_right;
	int		move_left;
	int		move;
	int		hight;
	int		width;
	char	*affich_move;
	int		bool;
}				t_mlx;

char	*get_map_so_long(int fd);

int		checkmap_so_long(char *str, t_s *s);

int		checkformat_so_long(char *str);

int		check_len_so_long(char **tab, t_s *s, int i);

int		check_wall(char **tab, t_s *s, int i, int j);

int		check_char_map(char *str, t_s *s);

char	*check_error(char *str);

int		is_validchar(char c);

int		find_exit(char **tab, t_s *s, int x, int y);

int		check_exit(char **tab, t_s *s, int i, int j);

int		ft_mlx(t_mlx *m);

void	ft_initial(t_mlx *m);

void	ft_init_void_img(t_mlx *m);

int		img_is_null(t_mlx *m);

void	ft_position(t_mlx *m);

void	ft_load_images_1(t_mlx *m);

void	ft_load_images_2(t_mlx *m);

int		ft_check_move(t_mlx *m);

int		ft_check_move_2(t_mlx *m);

int		ft_loop_hook(t_mlx *m);

int		ft_release(int keycode, t_mlx *m);

int		ft_keypress(int keycode, t_mlx *m);

int		render_next_frame(t_mlx *m);

int		ft_exit(t_mlx *m);

int		ft_do_move1(t_mlx *m);

int		ft_do_move2(t_mlx *m);

int		ft_do_move3(t_mlx *m);

int		ft_do_move4(t_mlx *m);

int		ft_do_move5(t_mlx *m);

int		ft_do_move6(t_mlx *m);

int		ft_do_move7(t_mlx *m);

int		ft_do_move8(t_mlx *m);

int		ft_do_move9(t_mlx *m);

int		ft_do_move10(t_mlx *m);

int		ft_do_move11(t_mlx *m);

int		ft_do_move12(t_mlx *m);

int		ft_do_move13(t_mlx *m);

void	ft_anim_left(t_mlx *m);

void	ft_anim_right(t_mlx *m);

void	ft_anim_down(t_mlx *m);

void	ft_anim_up(t_mlx *m);

void	ft_eat_box(t_mlx *m);

int		ft_eat_box_exit(t_mlx *m);

void	ft_change(int y, int x, t_mlx *m);

void	ft_put_image(t_mlx *m);

void	ft_do_check(t_mlx *m);

void	ft_destroy_img(t_mlx *m);

void	ft_anim_ul_and_right(t_mlx *m);

void	ft_anim_ul_and_left(t_mlx *m);

void	move_up_and_blocked_right(t_mlx *m);

void	move_low_and_blocked_right(t_mlx *m);

void	move_up_and_blocked_left(t_mlx *m);

void	move_low_and_blocked_left(t_mlx *m);

void	ft_move_right(t_mlx *m);

void	ft_move_left(t_mlx *m);

void	ft_move_up(t_mlx *m);

void	ft_move_low(t_mlx *m);

int		ft_do_double_move1(t_mlx *m);

int		ft_do_double_move2(t_mlx *m);

int		ft_do_double_move3(t_mlx *m);

int		ft_do_double_move4(t_mlx *m);

int		ft_do_double_move5(t_mlx *m);

int		ft_do_double_move6(t_mlx *m);

int		ft_do_double_move7(t_mlx *m);

int		ft_do_double_move8(t_mlx *m);

int		ft_do_double_move9(t_mlx *m);

int		ft_do_double_move10(t_mlx *m);

int		ft_do_double_move11(t_mlx *m);

int		ft_do_double_move12(t_mlx *m);

int		ft_do_double_move13(t_mlx *m);

void	ft_move_up_right(t_mlx *m);

void	ft_move_up_left(t_mlx *m);

void	ft_move_low_right(t_mlx *m);

void	ft_move_low_left(t_mlx *m);

void	ft_do_double_check_right(t_mlx *m);

void	ft_do_double_check_left(t_mlx *m);

#endif
