/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_so_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:12:25 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 16:58:10 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_release(int keycode, t_mlx *m)
{
	if (keycode == 0)
		m->move_left = 0;
	if (keycode == 2)
		m->move_right = 0;
	if (keycode == 1)
		m->move_low = 0;
	if (keycode == 13)
		m->move_up = 0;
	return (0);
}

int	ft_loop_hook(t_mlx *m)
{
	if (m->count.c == m->count.cpt && ft_eat_box_exit(m) == 1)
		return (0);
	ft_do_check(m);
	ft_eat_box(m);
	render_next_frame(m);
	return (0);
}

void	ft_mlx(t_mlx *m)
{
	ft_initial(m);
	ft_load_images_1(m);
	ft_load_images_2(m);
	ft_position(m);
	m->hauteur = m->i;
	m->largeur = m->j;
	if (m->hauteur * 50 <= 1550 && m->largeur * 50 <= 2850)
	{
		m->mlx_win = mlx_new_window(m->mlx, m->largeur * 50, \
		m->hauteur * 50, "Hello world!");
		mlx_loop_hook(m->mlx, ft_loop_hook, m);
		mlx_hook(m->mlx_win, 2, 0, ft_keypress, m);
		mlx_hook(m->mlx_win, 3, 0, ft_release, m);
		mlx_hook(m->mlx_win, 17, 0, ft_exit, m);
		mlx_loop(m->mlx);
		ft_destroy_img(m);
	}
	else
		ft_printf("erreur : la map depasse la taille de l'ecran !");
}
