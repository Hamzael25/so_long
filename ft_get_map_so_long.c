/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_map_so_long.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:53:43 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/05 14:31:43 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	checkformat_so_long(char *str)
{
	int	size;

	size = ft_strlen(str);
	if (str[size - 1] != 'r' || str[size - 2] != 'e' || str[size - 3] != 'b'
		|| str[size - 4] != '.' || size - 4 == 0)
		return (0);
	return (1);
}

char	*get_map_so_long(int fd)
{
	char		*tmp;
	static char	*str;
	int			endfile;

	endfile = 1;
	while (endfile != 0)
	{
		tmp = get_next_line_gnl(fd);
		if (tmp == NULL)
		{
			endfile = 0;
			break ;
		}
		str = ft_strjoin_gnl(str, tmp);
		free(tmp);
	}
	return (str);
}
