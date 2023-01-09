/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_move1_so_long.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:55:06 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 16:28:19 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_do_double_move1(t_mlx *m)
{
	if (m->move_left == 1)
		ft_move_left(m);
	else if (m->move_right == 1)
		ft_move_right(m);
	else if (m->move_low == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_low(m);
	else if (m->move_up == 1)
		ft_move_up(m);
	return (1);
}

int	ft_do_double_move2(t_mlx *m)
{
	if (m->move_left == 1)
		ft_move_left(m);
	else if (m->move_right == 1)
		ft_move_right(m);
	else if (m->move_low == 1)
		ft_move_low(m);
	else if (m->move_up == 1 && m->split[(m->py / 50)][(m->px / 50)] != '1')
		ft_move_up(m);
	return (1);
}

int	ft_do_double_move3(t_mlx *m)
{
	if (m->move_left == 1)
		ft_move_left(m);
	else if (m->move_right == 1 \
		&& m->split[(m->py / 50)][(m->px / 50) + 1] != '1')
		ft_move_right(m);
	else if (m->move_low == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_low(m);
	else if (m->move_up == 1)
		ft_move_up(m);
	if (m->move_up == 1 && m->move_right == 1
		&& m->split[(m->py / 50)][(m->px / 50) + 1] == '1')
		return (2);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50)][(m->px / 50 + 1)] == '1')
		return (3);
	return (1);
}

int	ft_do_double_move4(t_mlx *m)
{
	if (m->move_left == 1 \
		&& m->split[(m->py / 50)][(m->px / 50)] != '1')
		ft_move_left(m);
	else if (m->move_right == 1)
		ft_move_right(m);
	else if (m->move_low == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low(m);
	else if (m->move_up == 1)
		ft_move_up(m);
	if (m->move_up == 1 && m->move_left == 1
		&& m->split[(m->py / 50)][(m->px / 50)] == '1')
		return (4);
	else if (m->move_low == 1 && m->move_left == 1
		&& m->split[(m->py / 50)][(m->px / 50)] == '1')
		return (5);
	return (1);
}

int	ft_do_double_move5(t_mlx *m)
{
	if (m->move_left == 1)
		ft_move_left(m);
	else if (m->move_right == 1)
		ft_move_right(m);
	else if (m->move_low == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low(m);
	else if (m->move_up == 1)
		ft_move_up(m);
	return (1);
}
