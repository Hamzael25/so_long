/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:44:21 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/05 12:49:59 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_destroy_img(t_mlx *m)
{
	mlx_destroy_image(m->mlx, m->character);
	mlx_destroy_image(m->mlx, m->left);
	mlx_destroy_image(m->mlx, m->right);
	mlx_destroy_image(m->mlx, m->back);
	mlx_destroy_image(m->mlx, m->bubble);
	mlx_destroy_image(m->mlx, m->character2);
	mlx_destroy_image(m->mlx, m->victory);
	mlx_destroy_image(m->mlx, m->walk_back);
	mlx_destroy_image(m->mlx, m->walk_back2);
	mlx_destroy_image(m->mlx, m->walk_front);
	mlx_destroy_image(m->mlx, m->walk_front2);
	mlx_destroy_image(m->mlx, m->walk_left);
	mlx_destroy_image(m->mlx, m->walk_left2);
	mlx_destroy_image(m->mlx, m->walk_right);
	mlx_destroy_image(m->mlx, m->walk_right2);
	mlx_destroy_image(m->mlx, m->water);
	mlx_destroy_image(m->mlx, m->floor);
	mlx_destroy_image(m->mlx, m->item);
	mlx_destroy_image(m->mlx, m->exit);
}
