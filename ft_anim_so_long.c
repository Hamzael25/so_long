/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_anim_so_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 20:28:20 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/04 16:09:54 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_anim_left(t_mlx *m)
{
	if (m->px % 20 == 0)
		m->character = m->walk_left2;
	else
		m->character = m->walk_left;
}

void	ft_anim_right(t_mlx *m)
{
	if (m->px % 20 == 0)
		m->character = m->walk_right2;
	else
		m->character = m->walk_right;
}

void	ft_anim_down(t_mlx *m)
{
	if (m->py % 20 == 0)
		m->character = m->walk_front2;
	else
		m->character = m->walk_front;
}

void	ft_anim_up(t_mlx *m)
{
	if (m->py % 20 == 0)
		m->character = m->walk_back2;
	else
		m->character = m->walk_back;
}

void	ft_anim_ul_and_right(t_mlx *m)
{

	if (m->px % 20 == 0 && (m->py - 10) % 50 == 0)
		m->character = m->walk_right2;
	else if (m->px % 20 != 0 && (m->py - 10) % 50 == 0)
		m->character = m->walk_right;
	else if (m->px % 20 == 0 && m->py % 50 == 0)
		m->character = m->walk_right2;
	else if (m->px % 20 != 0 && m->py % 50 == 0)
		m->character = m->walk_right;
	else if (m->px % 20 == 0 && m->py % 20 == 0)
		m->character = m->walk_right2;
	else if (m->px % 20 != 0 && m->py % 20 != 0)
		m->character = m->walk_right;
	else if (m->px % 20 == 0 && m->py % 20 != 0)
		m->character = m->walk_right;
	else if (m->px % 20 != 0 && m->py % 20 == 0)
		m->character = m->walk_right2;
}

void	ft_anim_ul_and_left(t_mlx *m)
{
	if (m->px % 20 == 0 && (m->py - 10) % 50 == 0)
		m->character = m->walk_left2;
	else if (m->px % 20 != 0 && (m->py - 10) % 50 == 0)
		m->character = m->walk_left;
	else if (m->px % 20 == 0 && m->py % 50 == 0)
		m->character = m->walk_left2;
	else if (m->px % 20 != 0 && m->py % 50 == 0)
		m->character = m->walk_left;
	else if (m->px % 20 == 0 && m->py % 20 == 0)
		m->character = m->walk_left2;
	else if (m->px % 20 != 0 && m->py % 20 != 0)
		m->character = m->walk_left;
	else if (m->px % 20 == 0 && m->py % 20 != 0)
		m->character = m->walk_left;
	else if (m->px % 20 != 0 && m->py % 20 == 0)
		m->character = m->walk_left2;
}

void	move_up_and_blocked_right(t_mlx *m)
{
	if ((m->px - 10) % 50 == 0 && m->py % 20 == 0)
		m->character = m->walk_back2;
	else if ((m->px - 10) % 50 == 0 && m->py % 20 != 0)
		m->character = m->walk_back;
	
}

void	move_low_and_blocked_right(t_mlx *m)
{
	if ((m->px - 10) % 50 == 0 && m->py % 20 == 0)
		m->character = m->walk_front2;
	else if ((m->px - 10) % 50 == 0 && m->py % 20 != 0)
		m->character = m->walk_front;
}

void	move_up_and_blocked_left(t_mlx *m)
{
	if (m->py % 20 == 0)
		m->character = m->walk_back2;
	else if (m->py % 20 != 0)
		m->character = m->walk_back;
	
}

void	move_low_and_blocked_left(t_mlx *m)
{
	if (m->py % 20 == 0)
		m->character = m->walk_front2;
	else if (m->py % 20 != 0)
		m->character = m->walk_front;
}
