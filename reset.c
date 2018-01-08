/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:37:38 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:37:39 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_etri	*ft_reset(t_etri *tetriminos, int nb)
{
	int i;
	int k;

	i = 1;
	k = 0;
	while (k < nb)
	{
		tetriminos[k].x[i] = tetriminos[k].x[i] - tetriminos[k].x[0];
		tetriminos[k].y[i] = tetriminos[k].y[i] - tetriminos[k].y[0];
		i++;
		if (i > 3)
		{
			tetriminos[k].x[0] = 0;
			tetriminos[k].y[0] = 0;
			i = 1;
			k++;
		}
	}
	return (tetriminos);
}
