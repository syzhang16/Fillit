/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:42:02 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:42:04 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_tetriminos(char *str)
{
	int		i;

	i = 0;
	if (ft_check_tetriminos(str, i) != 1)
		return (1);
	if (ft_check_diese(str, i) != 1)
		return (2);
	if (ft_check_nl(str) != 1)
		return (3);
	if (ft_check_links(str, i) != 1)
		return (4);
	return (0);
}
