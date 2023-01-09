/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_so_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:33:00 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 15:55:37 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit(t_mlx *m)
{
	ft_free_tab(m->split);
	exit(0);
	return (0);
}

int	ft_keypress(int keycode, t_mlx *m)
{
	if (keycode == 53)
	{
		ft_free_tab(m->split);
		exit(0);
	}
	if (keycode == 0)
			m->move_left = 1;
	if (keycode == 2)
			m->move_right = 1;
	if (keycode == 1)
			m->move_low = 1;
	if (keycode == 13)
			m->move_up = 1;
	return (0);
}

void	ft_put_image(t_mlx *m)
{
	m->x = 0;
	m->y = 0;
	m->i = 0;
	while (m->split[m->i])
	{
		m->j = 0;
		m->x = 0;
		while (m->split[m->i][m->j])
		{
			mlx_put_image_to_window(m->mlx, m->mlx_win, m->floor, m->x, m->y);
			if (m->split[m->i][m->j] == '1')
				mlx_put_image_to_window(m->mlx, m->mlx_win, \
				m->water, m->x, m->y);
			if (m->split[m->i][m->j] == 'C')
				mlx_put_image_to_window(m->mlx, m->mlx_win, \
				m->item, m->x, m->y);
			m->x += 50;
			m->j++;
		}
		m->i++;
		m->y += 50;
	}
}

int	render_next_frame(t_mlx *m)
{
	mlx_clear_window(m->mlx, m->mlx_win);
	ft_put_image(m);
	mlx_put_image_to_window(m->mlx, m->mlx_win, m->floor, m->ex, m->ey);
	mlx_put_image_to_window(m->mlx, m->mlx_win, m->exit, m->ex, m->ey);
	if (m->count.c == m->count.cpt && ft_eat_box_exit(m) == 1)
	{
		mlx_string_put(m->mlx, m->mlx_win, m->largeur * 20, \
		25, 10000, "FELICITATIONS VOUS AVEZ FINI LE JEU !!!!!");
		m->character = m->character2;
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->bubble,
			m->px + 40, m->py);
		mlx_put_image_to_window(m->mlx, m->mlx_win, m->victory,
			m->px + 42, m->py - 3);
	}
	m->nbr_move = ft_itoa(m->move);
	m->affich_move = ft_strjoin("nombre de mouvements : ", m->nbr_move);
	free(m->nbr_move);
	mlx_string_put(m->mlx, m->mlx_win, 20, 20, 10000, m->affich_move);
	free(m->affich_move);
	mlx_put_image_to_window(m->mlx, m->mlx_win, m->character, m->px, m->py);
	return (0);
}
