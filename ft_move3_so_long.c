/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move3_so_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:16:52 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/04 16:20:38 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_do_move11(t_mlx *m)
{
	if (m->move_left == 1)
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_right == 1 \
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_low == 1)
	{
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_up == 1)
	{
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
}

void	ft_do_move12(t_mlx *m)
{
	if (m->move_left == 1)
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_right == 1 \
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_low == 1)
	{
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_up == 1 && m->split[(m->py / 50)][(m->px / 50)] != '1')
	{
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
}

void	ft_do_move13(t_mlx *m)
{
	if (m->move_left == 1)
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_right == 1)
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_low == 1)
	{
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	if (m->move_up == 1)
	{
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
}

void	ft_check_move_2(t_mlx *m)
{
	if ((m->py - 10) % 50 == 0 && (m->px + 10) % 50 == 0)
		ft_do_move8(m);
	else if ((m->px + 10) % 50 == 0 && m->py % 50 != 0 \
		&& (m->py + 10) % 50 != 0 && (m->py - 10) % 50 != 0)
		ft_do_move9(m);
	else if ((m->py - 10) % 50 == 0 && m->px % 50 != 0 \
		&& (m->px + 10) % 50 != 0 && (m->px - 10) % 50 != 0)
		ft_do_move10(m);
	else if ((m->px - 10) % 50 == 0 && m->py % 50 != 0 \
		&& (m->py + 10) % 50 != 0 && (m->py - 10) % 50 != 0)
		ft_do_move11(m);
	else if ((m->py - 10) % 50 == 0 && (m->px - 10) % 50 == 0)
		ft_do_move12(m);
	else if (((m->py + 10) % 50 == 0 && m->px % 50 == 0)
		|| (m->py % 50 != 0 && (m->py + 10) % 50 != 0 \
		&& (m->py - 10) % 50 != 0 && m->px % 50 != 0 \
		&& (m->px + 10) % 50 != 0 && (m->px - 10) % 50 != 0)
		|| (m->px % 50 == 0 && m->py % 50 != 0 \
		&& (m->py - 10) % 50 != 0 && (m->py + 10) % 50 != 0)
		|| ((m->py + 10) % 50 == 0 && m->px % 50 != 0 \
		&& (m->px + 10) % 50 != 0 && (m->px - 10) % 50 != 0))
		ft_do_move13(m);
}

void	ft_check_move(t_mlx *m)
{	
	if (m->py % 50 == 0 && m->px % 50 == 0)
		ft_do_move1(m);
	else if ((m->py - 10) % 50 == 0 && m->px % 50 == 0)
		ft_do_move2(m);
	else if (m->py % 50 == 0 && (m->px - 10) % 50 == 0)
		ft_do_move3(m);
	else if ((m->py % 50 == 0 && (m->px + 10) % 50 == 0))
		ft_do_move4(m);
	else if ((m->py % 50 == 0 && m->px % 50 != 0 \
		&& (m->px + 10) % 50 != 0 && (m->px - 10) % 50 != 0))
		ft_do_move5(m);
	else if ((m->py + 10) % 50 == 0 && (m->px + 10) % 50 == 0)
		ft_do_move6(m);
	else if ((m->py + 10) % 50 == 0 && (m->px - 10) % 50 == 0)
		ft_do_move7(m);
	else
		ft_check_move_2(m);
}
