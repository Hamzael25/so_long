/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move2_so_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:15:26 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 16:44:18 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_do_move6(t_mlx *m)
{
	if (m->move_up == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_up_left(m);
	else if (m->move_low == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_low_left(m);
	else if (m->move_up == 1 && m->move_right == 1)
		ft_move_up_right(m);
	else if (m->move_low == 1 && m->move_right == 1)
		ft_move_low_right(m);
	else
		return (ft_do_double_move6(m));
	return (1);
}

int	ft_do_move7(t_mlx *m)
{
	if (m->move_up == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_up_right(m);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low_right(m);
	else if (m->move_up == 1 && m->move_left == 1)
		ft_move_up_left(m);
	else if (m->move_low == 1 && m->move_left == 1)
		ft_move_low_left(m);
	else
		return (ft_do_double_move7(m));
	return (1);
}

int	ft_do_move8(t_mlx *m)
{
	if (m->move_up == 1 && m->move_right == 1
		&& m->split[(m->py / 50)][(m->px / 50) + 1] != '1')
		ft_move_up_right(m);
	else if (m->move_low == 1 && m->move_right == 1)
		ft_move_low_right(m);
	else if (m->move_up == 1 && m->move_left == 1
		&& m->split[(m->py / 50)][(m->px / 50)] != '1'
		&& m->split[(m->py / 50)][(m->px / 50) + 1] != '1')
		ft_move_up_left(m);
	else if (m->move_low == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_low_left(m);
	else
		return (ft_do_double_move8(m));
	return (1);
}

int	ft_do_move9(t_mlx *m)
{
	if (m->move_up == 1 && m->move_right == 1)
		ft_move_up_right(m);
	else if (m->move_low == 1 && m->move_right == 1)
		ft_move_low_right(m);
	else if (m->move_up == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_up_left(m);
	else if (m->move_low == 1 && m->move_left == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		ft_move_low_left(m);
	else
		return (ft_do_double_move9(m));
	return (1);
}

int	ft_do_move10(t_mlx *m)
{
	if (m->move_up == 1 && m->move_right == 1
		&& m->split[(m->py / 50)][(m->px / 50)] != '1'
		&& m->split[(m->py / 50)][(m->px / 50) + 1] != '1')
		ft_move_up_right(m);
	else if (m->move_low == 1 && m->move_right == 1)
		ft_move_low_right(m);
	else if (m->move_up == 1 && m->move_left == 1
		&& m->split[(m->py / 50)][(m->px / 50)] != '1'
		&& m->split[(m->py / 50)][(m->px / 50) + 1] != '1')
		ft_move_up_left(m);
	else if (m->move_low == 1 && m->move_left == 1)
		ft_move_low_left(m);
	else
		return (ft_do_double_move10(m));
	return (1);
}
