/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:37:23 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:37:25 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	char	*str;

	if (!ft_read_file(argc, argv))
		return (0);
	str = ft_read_file(argc, argv);
	if (ft_tetriminos(str) != 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	ft_solution(str);
	return (0);
}
