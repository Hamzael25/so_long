/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_move3_so_long.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:17:55 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 16:06:42 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_do_double_move11(t_mlx *m)
{
	if (m->move_left == 1)
		ft_move_left(m);
	else if (m->move_right == 1 \
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_right(m);
	else if (m->move_low == 1)
		ft_move_low(m);
	else if (m->move_up == 1)
		ft_move_up(m);
	if (m->move_up == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] == '1')
		return (2);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50 + 1)] == '1')
		return (3);
	return (1);
}

int	ft_do_double_move12(t_mlx *m)
{
	if (m->move_left == 1)
		ft_move_left(m);
	else if (m->move_right == 1 \
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_right(m);
	else if (m->move_low == 1)
		ft_move_low(m);
	else if (m->move_up == 1 && m->split[(m->py / 50)][(m->px / 50)] != '1')
		ft_move_up(m);
	if (m->move_up == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] == '1')
		return (2);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50 + 1)] == '1')
		return (3);
	return (1);
}

int	ft_do_double_move13(t_mlx *m)
{
	if (m->move_left == 1)
		ft_move_left(m);
	else if (m->move_right == 1)
		ft_move_right(m);
	else if (m->move_low == 1)
		ft_move_low(m);
	else if (m->move_up == 1)
		ft_move_up(m);
	return (1);
}
