/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move1_so_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:12:08 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 16:50:23 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_do_move1(t_mlx *m)
{
	if (m->move_low == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_low_left(m);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_low_right(m);
	else if (m->move_up == 1 && m->move_right == 1)
		ft_move_up_right(m);
	else if (m->move_up == 1 && m->move_left == 1)
		ft_move_up_left(m);
	else
		return (ft_do_double_move1(m));
	return (1);
}

int	ft_do_move2(t_mlx *m)
{
	if (m->move_up == 1 && m->move_left == 1
		&& m->split[(m->py / 50)][(m->px / 50)] != '1')
		ft_move_up_left(m);
	else if (m->move_up == 1 && m->move_right == 1
		&& m->split[(m->py / 50)][(m->px / 50)] != '1')
		ft_move_up_right(m);
	else if (m->move_low == 1 && m->move_right == 1)
		ft_move_low_right(m);
	else if (m->move_low == 1 && m->move_left == 1)
		ft_move_low_left(m);
	else
		return (ft_do_double_move2(m));
	return (1);
}

int	ft_do_move3(t_mlx *m)
{
	if (m->move_up == 1 && m->move_right == 1
		&& m->split[(m->py / 50)][(m->px / 50) + 1] != '1')
		ft_move_up_right(m);
	else if (m->move_low == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_low_left(m);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
			&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low_right(m);
	else if (m->move_up == 1 && m->move_left == 1)
		ft_move_up_left(m);
	else
		return (ft_do_double_move3(m));
	return (1);
}

int	ft_do_move4(t_mlx *m)
{
	if (m->move_up == 1 && m->move_left == 1
		&& m->split[(m->py / 50)][(m->px / 50)] != '1')
		ft_move_up_left(m);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low_right(m);
	else if (m->move_low == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low_left(m);
	else if (m->move_up == 1 && m->move_right == 1)
		ft_move_up_right(m);
	else
		return (ft_do_double_move4(m));
	return (1);
}

int	ft_do_move5(t_mlx *m)
{
	if (m->move_low == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low_left(m);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low_right(m);
	else if (m->move_up == 1 && m->move_right == 1)
		ft_move_up_right(m);
	else if (m->move_up == 1 && m->move_left == 1)
		ft_move_up_left(m);
	else
		return (ft_do_double_move5(m));
	return (1);
}
