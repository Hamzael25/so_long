/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_exit_so_long.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:51:19 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/05 15:46:58 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	find_exit(char **tab, t_s *s, int x, int y)
{
	int	found;
	int	right;
	int	left;
	int	down;
	int	up;

	if (s->c + 1 == s->cpt)
		return (1);
	if (tab[x][y] == '1')
		return (0);
	if (tab[x][y] == 'V')
		return (0);
	if (tab[x][y] == 'C' || tab[x][y] == 'E')
		s->cpt += 1;
	tab[x][y] = 'V';
	right = find_exit(tab, s, x, y + 1);
	down = find_exit(tab, s, x + 1, y);
	left = find_exit(tab, s, x, y - 1);
	up = find_exit(tab, s, x - 1, y);
	found = right;
	found = down;
	found = left;
	found = up;
	return (found);
}

int	check_exit(char **tab, t_s *s, int i, int j)
{
	int		x;
	int		y;
	int		solution;

	i = 1;
	while (i < s->size - 1)
	{
		j = 1;
		while (tab[i][j])
		{
			if (tab[i][j] == 'P')
			{
				x = i;
				y = j;
			}
			j += 1;
		}
		i += 1;
	}
	s->cpt = 0;
	solution = find_exit(tab, s, x, y);
	if (!solution)
		return (0);
	return (1);
}
