/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move3_so_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:16:52 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 16:53:18 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_do_move11(t_mlx *m)
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
		return (ft_do_double_move11(m));
	return (1);
}

int	ft_do_move12(t_mlx *m)
{
	if (m->move_right == 1 && m->split[(m->py / 50)][(m->px / 50)] != '1'
		&& m->split[(m->py / 50)][(m->px / 50) + 1] != '1' && m->move_up == 1)
		ft_move_up_right(m);
	else if (m->move_up == 1 && m->move_left == 1
		&& m->split[(m->py / 50)][(m->px / 50)] != '1')
		ft_move_up_left(m);
	else if (m->move_low == 1 && m->move_right == 1
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		ft_move_low_right(m);
	else if (m->move_low == 1 && m->move_left == 1)
		ft_move_low_left(m);
	else
		return (ft_do_double_move12(m));
	return (1);
}

int	ft_do_move13(t_mlx *m)
{
	if (m->move_up == 1 && m->move_right == 1)
		ft_move_up_right(m);
	else if (m->move_low == 1 && m->move_right == 1)
		ft_move_low_right(m);
	else if (m->move_up == 1 && m->move_left == 1)
		ft_move_up_left(m);
	else if (m->move_low == 1 && m->move_left == 1)
		ft_move_low_left(m);
	else
		return (ft_do_double_move13(m));
	return (1);
}

int	ft_check_move_2(t_mlx *m)
{
	if ((m->py - 10) % 50 == 0 && (m->px + 10) % 50 == 0)
		return (ft_do_move8(m));
	else if ((m->px + 10) % 50 == 0 && m->py % 50 != 0 \
		&& (m->py + 10) % 50 != 0 && (m->py - 10) % 50 != 0)
		return (ft_do_move9(m));
	else if ((m->py - 10) % 50 == 0 && m->px % 50 != 0 \
		&& (m->px + 10) % 50 != 0 && (m->px - 10) % 50 != 0)
		return (ft_do_move10(m));
	else if ((m->px - 10) % 50 == 0 && m->py % 50 != 0 \
		&& (m->py + 10) % 50 != 0 && (m->py - 10) % 50 != 0)
		return (ft_do_move11(m));
	else if ((m->py - 10) % 50 == 0 && (m->px - 10) % 50 == 0)
		return (ft_do_move12(m));
	else if (((m->py + 10) % 50 == 0 && m->px % 50 == 0)
		|| (m->py % 50 != 0 && (m->py + 10) % 50 != 0 \
		&& (m->py - 10) % 50 != 0 && m->px % 50 != 0 \
		&& (m->px + 10) % 50 != 0 && (m->px - 10) % 50 != 0)
		|| (m->px % 50 == 0 && m->py % 50 != 0 \
		&& (m->py - 10) % 50 != 0 && (m->py + 10) % 50 != 0)
		|| ((m->py + 10) % 50 == 0 && m->px % 50 != 0 \
		&& (m->px + 10) % 50 != 0 && (m->px - 10) % 50 != 0))
		return (ft_do_move13(m));
	return (0);
}

int	ft_check_move(t_mlx *m)
{	
	if (m->py % 50 == 0 && m->px % 50 == 0)
		return (ft_do_move1(m));
	else if ((m->py - 10) % 50 == 0 && m->px % 50 == 0)
		return (ft_do_move2(m));
	else if (m->py % 50 == 0 && (m->px - 10) % 50 == 0)
		return (ft_do_move3(m));
	else if ((m->py % 50 == 0 && (m->px + 10) % 50 == 0))
		return (ft_do_move4(m));
	else if ((m->py % 50 == 0 && m->px % 50 != 0 \
		&& (m->px + 10) % 50 != 0 && (m->px - 10) % 50 != 0))
		return (ft_do_move5(m));
	else if ((m->py + 10) % 50 == 0 && (m->px + 10) % 50 == 0)
		return (ft_do_move6(m));
	else if ((m->py + 10) % 50 == 0 && (m->px - 10) % 50 == 0)
		return (ft_do_move7(m));
	else
		return (ft_check_move_2(m));
}
