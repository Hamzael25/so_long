/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_so_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ouar <hel-ouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:10:56 by hel-ouar          #+#    #+#             */
/*   Updated: 2023/01/05 13:31:46 by hel-ouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_mlx	m;

	if (argc == 2)
	{
		m.map = check_error(argv[1]);
		if (m.map == NULL)
			ft_printf("Error\nRevois ce que tu as entré mon ami !");
		else
			ft_mlx(&m);
	}
	else
		ft_printf("Error\nRevois ce que tu as entré mon amis !");
}
