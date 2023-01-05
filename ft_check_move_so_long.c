/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_move_so_long.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 21:13:22 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/04 16:09:31 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*check_error(char *str)
{
	char	*map;
	t_s		s;
	int		fd;

	if (!checkformat_so_long(str))
		return (NULL);
	fd = open(str, O_RDONLY);
	if (fd < 0)
		return (NULL);
	map = get_map_so_long(fd);
	if (!checkmap_so_long(map, &s))
	{
		close(fd);
		return (NULL);
	}
	close(fd);
	return (map);
}

void	ft_change(int y, int x, t_mlx *m)
{
	m->split[((m->py + y) / 50)][((m->px + x) / 50)] = '0';
	m->count.cpt += 1;
}

void	ft_eat_box_2(t_mlx *m)
{
	if (m->split[((m->py) / 50)][((m->px) / 50)] == 'C' \
		&& (m->py) % 50 == 0 && (m->px) % 50 == 0)
		ft_change(0, 0, m);
	else if (m->split[((m->py) / 50)][((m->px - 10) / 50)] == 'C' \
		&& (m->py) % 50 == 0 && (m->px - 10) % 50 == 0)
		ft_change(0, -10, m);
	else if (m->split[((m->py + 10) / 50)][((m->px + 20) / 50)] == 'C' \
		&& (m->py + 10) % 50 == 0 && (m->px + 20) % 50 == 0)
		ft_change(10, 20, m);
	else if (m->split[((m->py) / 50)][((m->px + 20) / 50)] == 'C' \
		&& (m->py) % 50 == 0 && (m->px + 20) % 50 == 0)
		ft_change(0, 20, m);
	else if (m->split[((m->py + 10) / 50)][((m->px - 20) / 50)] == 'C' \
		&& (m->py + 10) % 50 == 0 && (m->px - 20) % 50 == 0)
		ft_change(10, -20, m);
	else if (m->split[((m->py) / 50)][((m->px - 20) / 50)] == 'C' \
		&& (m->py) % 50 == 0 && (m->px - 20) % 50 == 0)
		ft_change(0, -20, m);
}

void	ft_eat_box(t_mlx *m)
{
	if (m->split[((m->py + 20) / 50)][((m->px + 20) / 50)] == 'C' \
		&& (m->py + 20) % 50 == 0 && (m->px + 20) % 50 == 0)
		ft_change(20, 20, m);
	else if (m->split[((m->py + 20) / 50)][((m->px + 10) / 50)] == 'C' \
		&& (m->py + 20) % 50 == 0 && (m->px + 10) % 50 == 0)
		ft_change(20, 10, m);
	else if (m->split[((m->py + 20) / 50)][((m->px) / 50)] == 'C' \
		&& (m->py + 20) % 50 == 0 && (m->px) % 50 == 0)
		ft_change(20, 0, m);
	else if (m->split[((m->py + 20) / 50)][((m->px - 10) / 50)] == 'C' \
		&& (m->py + 20) % 50 == 0 && (m->px - 10) % 50 == 0)
		ft_change(20, -10, m);
	else if (m->split[((m->py + 20) / 50)][((m->px - 20) / 50)] == 'C' \
		&& (m->py + 20) % 50 == 0 && (m->px - 20) % 50 == 0)
		ft_change(20, -20, m);
	else if (m->split[((m->py) / 50)][((m->px + 10) / 50)] == 'C' \
		&& (m->py) % 50 == 0 && (m->px + 10) % 50 == 0)
		ft_change(0, 10, m);
	else
		ft_eat_box_2(m);
}

int	ft_eat_box_exit(t_mlx *m)
{
	if ((m->split[((m->py) / 50)][((m->px + 20) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px + 20) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px + 10) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px + 10) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px - 10) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px - 10) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px - 20) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px - 20) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px + 20) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px + 20) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px + 10) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px + 10) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px - 10) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px - 10) % 50 == 0)
		|| (m->split[((m->py) / 50)][((m->px - 20) / 50)] == 'E' \
		&& (m->py) % 50 == 0 && (m->px - 20) % 50 == 0))
		return (1);
	return (0);
}
