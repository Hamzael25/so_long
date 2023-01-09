/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_double_move_so_long.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:33:20 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/09 16:49:43 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_move_up_right(t_mlx *m)
{
	ft_move_right(m);
	ft_move_up(m);
}

void	ft_move_up_left(t_mlx *m)
{
	ft_move_left(m);
	ft_move_up(m);
}

void	ft_move_low_right(t_mlx *m)
{
	ft_move_right(m);
	ft_move_low(m);
}

void	ft_move_low_left(t_mlx *m)
{
	ft_move_left(m);
	ft_move_low(m);
}
