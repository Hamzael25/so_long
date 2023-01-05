/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_so_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:32:37 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/05 14:34:08 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_load_images_1(t_mlx *m)
{
	m->water = mlx_xpm_file_to_image(m->mlx, "img_xpm/water.xpm", \
	&m->img_width, &m->img_height);
	m->character = mlx_xpm_file_to_image(m->mlx, "img_xpm/face.xpm", \
	&m->img_width, &m->img_height);
	m->floor = mlx_xpm_file_to_image(m->mlx, "img_xpm/grass.xpm", \
	&m->img_width, &m->img_height);
	m->item = mlx_xpm_file_to_image(m->mlx, "img_xpm/milk.xpm", \
	&m->img_width, &m->img_height);
	m->exit = mlx_xpm_file_to_image(m->mlx, "img_xpm/exit.xpm", \
	&m->img_width, &m->img_height);
	m->back = mlx_xpm_file_to_image(m->mlx, "img_xpm/back.xpm", \
	&m->img_width, &m->img_height);
	m->left = mlx_xpm_file_to_image(m->mlx, "img_xpm/left.xpm", \
	&m->img_width, &m->img_height);
	m->right = mlx_xpm_file_to_image(m->mlx, "img_xpm/right.xpm", \
	&m->img_width, &m->img_height);
	m->character2 = mlx_xpm_file_to_image(m->mlx, "img_xpm/face.xpm", \
	&m->img_width, &m->img_height);
	m->bubble = mlx_xpm_file_to_image(m->mlx, "img_xpm/bubble.xpm", \
	&m->img_width, &m->img_height);
	m->victory = mlx_xpm_file_to_image(m->mlx, "img_xpm/victory.xpm", \
	&m->img_width, &m->img_height);
}

void	ft_load_images_2(t_mlx *m)
{
	m->walk_left = mlx_xpm_file_to_image(m->mlx, "img_xpm/walk_left.xpm", \
	&m->img_width, &m->img_height);
	m->walk_left2 = mlx_xpm_file_to_image(m->mlx, "img_xpm/walk_left2.xpm", \
	&m->img_width, &m->img_height);
	m->walk_right = mlx_xpm_file_to_image(m->mlx, "img_xpm/walk_right.xpm", \
	&m->img_width, &m->img_height);
	m->walk_right2 = mlx_xpm_file_to_image(m->mlx, "img_xpm/walk_right2.xpm", \
	&m->img_width, &m->img_height);
	m->walk_front = mlx_xpm_file_to_image(m->mlx, "img_xpm/walk_front.xpm", \
	&m->img_width, &m->img_height);
	m->walk_front2 = mlx_xpm_file_to_image(m->mlx, "img_xpm/walk_front2.xpm", \
	&m->img_width, &m->img_height);
	m->walk_back = mlx_xpm_file_to_image(m->mlx, "img_xpm/walk_back.xpm", \
	&m->img_width, &m->img_height);
	m->walk_back2 = mlx_xpm_file_to_image(m->mlx, "img_xpm/walk_back2.xpm", \
	&m->img_width, &m->img_height);
}

void	ft_position(t_mlx *m)
{
	m->split = ft_split(m->map, '\n');
	while (m->split[m->i])
	{
		m->j = 0;
		m->x = 0;
		while (m->split[m->i][m->j])
		{
			if (m->split[m->i][m->j] == 'P')
			{
				m->px = m->x;
				m->py = m->y;
			}
			if (m->split[m->i][m->j] == 'C')
				m->count.c += 1;
			if (m->split[m->i][m->j] == 'E')
			{
				m->ey = m->y;
				m->ex = m->x;
			}
			m->x += 50;
			m->j++;
		}
		m->i++;
		m->y += 50;
	}
}

void	ft_initial(t_mlx *m)
{
	m->mlx = mlx_init();
	m->count.cpt = 0;
	m->count.c = 0;
	m->y = 0;
	m->i = 0;
	m->move_left = 0;
	m->move_right = 0;
	m->move_low = 0;
	m->move_up = 0;
}
