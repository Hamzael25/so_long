/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_check_move_so_long.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:38 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 17:04:11 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_do_double_check_left(t_mlx *m)
{
	m->bool = ft_check_move(m);
	if (m->move_low == 1 || m->move_up == 1)
	{
		if (m->bool == 4)
			move_up_and_blocked_left(m);
		else if (m->bool == 5)
			move_low_and_blocked_left(m);
		else
			ft_anim_ul_and_left(m);
	}
	else
		ft_anim_left(m);
}

void	ft_do_double_check_right(t_mlx *m)
{
	m->bool = ft_check_move(m);
	if (m->move_low == 1 || m->move_up == 1)
	{
		if (m->bool == 2)
			move_up_and_blocked_right(m);
		else if (m->bool == 3)
			move_low_and_blocked_right(m);
		else
			ft_anim_ul_and_right(m);
	}
	else
		ft_anim_right(m);
}

void	ft_do_check(t_mlx *m)
{
	if (m->move_left == 1)
		ft_do_double_check_left(m);
	else if (m->move_right == 1)
		ft_do_double_check_right(m);
	else if (m->move_low == 1)
	{
		m->bool = ft_check_move(m);
		ft_anim_down(m);
	}
	else if (m->move_up == 1)
	{
		m->bool = ft_check_move(m);
		ft_anim_up(m);
	}
}
