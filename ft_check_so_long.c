/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_so_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:20:38 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/05 14:18:05 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	is_validchar(char c)
{
	if (c == 'C' || c == 'P' || c == 'E' || c == '1' || c == '0')
		return (1);
	return (0);
}

int	check_char_map(char *str, t_s *s)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && (is_validchar(str[i]) == 1 || str[i] == '\n'))
	{
		if (str[i] == 'P')
			s->p += 1;
		if (str[i] == 'C')
			s->c += 1;
		if (str[i] == 'E')
			s->e += 1;
		if (str[i] == '\n' && str[i + 1] == '\n')
			return (0);
		i += 1;
	}
	if (s->p != 1 || s->e != 1 || s->c < 1 || str[i] != 0
		|| is_validchar(str[0]) == 0
		|| is_validchar(str[ft_strlen(str) - 1]) == 0)
		return (0);
	return (1);
}

int	check_wall(char **tab, t_s *s, int i, int j)
{
	while (tab[0][j] && tab[s->size - 1][j])
	{
		if (tab[0][j] != '1' || tab[s->size - 1][j] != '1')
			return (0);
		j += 1;
	}
	i = 1;
	while (i < s->size - 1)
	{
		if (tab[i][0] != '1' || tab[i][ft_strlen(tab[i]) - 1] != '1')
			return (0);
		i += 1;
	}
	return (1);
}

int	check_len_so_long(char **tab, t_s *s, int i)
{
	while (i < s->size - 1)
	{
		if (ft_strlen(tab[i]) != ft_strlen(tab[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	checkmap_so_long(char *str, t_s *s)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	s->size = 0;
	s->e = 0;
	s->p = 0;
	s->c = 0;
	if (!(check_char_map(str, s)))
		return (0);
	tab = ft_split(str, '\n');
	while (tab[s->size])
		s->size += 1;
	i = 0;
	if (!check_len_so_long(tab, s, i))
		return (ft_free_tab(tab), 0);
	if (!check_wall(tab, s, i, j))
		return (ft_free_tab(tab), 0);
	if (!check_exit(tab, s, i, j))
		return (ft_free_tab(tab), 0);
	return (ft_free_tab(tab), 1);
}
