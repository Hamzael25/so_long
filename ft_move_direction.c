/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_direction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:08:21 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 16:08:44 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_right(t_mlx *m)
{
	m->px += 10;
	m->move++;
	ft_printf("%d ", m->move);
}

void	ft_move_left(t_mlx *m)
{
	m->px -= 10;
	m->move++;
	ft_printf("%d ", m->move);
}

void	ft_move_up(t_mlx *m)
{
	m->py -= 10;
	m->move++;
	ft_printf("%d ", m->move);
}

void	ft_move_low(t_mlx *m)
{
	m->py += 10;
	m->move++;
	ft_printf("%d ", m->move);
}
