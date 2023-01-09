/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move1_so_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 18:12:08 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/04 16:20:09 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_do_move1(t_mlx *m)
{
	if (m->move_low == 1 && m->move_left == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_low == 1 && m->move_right == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_up == 1 && m->move_right == 1)
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_up == 1 && m->move_left == 1)
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else
	{
		if (m->move_left == 1)
		{
			m->px -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_right == 1)
		{
			m->px += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_low == 1 \
			&& m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		{
			m->py += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_up == 1)
		{
			m->py -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
	}
}

void	ft_do_move2(t_mlx *m)
{
	if (m->move_up == 1 && m->move_left == 1 && m->split[(m->py / 50)][(m->px / 50)] != '1')
	{
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_up == 1 && m->move_right == 1 && m->split[(m->py / 50)][(m->px / 50)] != '1')
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_low == 1 && m->move_right == 1)
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_low == 1 && m->move_left == 1)
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else
	{
		if (m->move_left == 1)
		{
			m->px -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_right == 1)
		{
			m->px += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_low == 1)
		{
			m->py += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_up == 1 \
			&& m->split[(m->py / 50)][(m->px / 50)] != '1')
		{
			m->py -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
	}
}

int	ft_do_move3(t_mlx *m)
{
	if (m->move_up == 1 && m->move_right == 1 && m->split[(m->py / 50)][(m->px / 50) + 1] != '1')
	{
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}	
	else if (m->move_low == 1 && m->move_left == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_low == 1 && m->move_right == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
			&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
	{
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_up == 1 && m->move_left == 1)
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else 
	{
		if (m->move_left == 1)
		{
			m->px -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_right == 1 \
			&& m->split[(m->py / 50)][(m->px / 50) + 1] != '1')
		{
			m->px += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_low == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1')
		{
			m->py += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_up == 1)
		{
			m->py -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
	}
	if (m->move_up == 1 && m->move_right == 1 && m->split[(m->py / 50)][(m->px / 50) + 1] == '1')
		return (2);
	else if (m->move_low == 1 && m->move_right == 1 && m->split[(m->py / 50)][(m->px / 50 + 1)] == '1')
		return (3);
	return (1);
}

int	ft_do_move4(t_mlx *m)
{
	if (m->move_up == 1 && m->move_left == 1 && m->split[(m->py / 50)][(m->px / 50)] != '1')
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}	
	else if (m->move_low == 1 && m->move_right == 1 && m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_low == 1 && m->move_left == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
			&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_up == 1 && m->move_right == 1)
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else 
	{
		if (m->move_left == 1 \
			&& m->split[(m->py / 50)][(m->px / 50)] != '1')
		{
			m->px -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_right == 1)
		{
			m->px += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_low == 1 && m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		{
			m->py += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_up == 1)
		{
			m->py -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
	}
	if (m->move_up == 1 && m->move_left == 1 && m->split[(m->py / 50)][(m->px / 50)] == '1')
		return (4);
	else if (m->move_low == 1 && m->move_left == 1 && m->split[(m->py / 50)][(m->px / 50)] == '1')
		return (5);
	return (1);
}

void	ft_do_move5(t_mlx *m)
{
	if (m->move_low == 1 && m->move_left == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_low == 1 && m->move_right == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
		&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py += 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_up == 1 && m->move_right == 1)
	{
		m->px += 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else if (m->move_up == 1 && m->move_left == 1)
	{
		m->px -= 10;
		m->move++;
		ft_printf("%d ", m->move);
		m->py -= 10;
		m->move++;
		ft_printf("%d ", m->move);
	}
	else
	{
		if (m->move_left == 1)
		{
			m->px -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_right == 1)
		{
			m->px += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_low == 1 && m->split[(m->py / 50) + 1][(m->px / 50)] != '1'
			&& m->split[(m->py / 50) + 1][(m->px / 50) + 1] != '1')
		{
			m->py += 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
		else if (m->move_up == 1)
		{
			m->py -= 10;
			m->move++;
			ft_printf("%d ", m->move);
		}
	}
}
