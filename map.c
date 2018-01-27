/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:37:54 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:41:34 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	void		ft_overside(int *i, int *j)
{
	if (*i > 3)
	{
		*i = 0;
		*j += 1;
	}
}

static	void		ft_index_count(int *i, int *j, int *count, char *str)
{
	if (str[*i] == '\n' && str[*i + 1] == '\n')
	{
		*j = 0;
		*i += 1;
		*count = *count + 1;
	}
}

t_etri				*ft_map(char *str, int i, int j, int k)
{
	int		l;
	int		count;
	t_etri	*tetriminos;

	tetriminos = (t_etri *)malloc((ft_strlen(str) / 21 + 1) * sizeof(t_etri));
	l = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			j++;
		ft_index_count(&i, &j, &count, str);
		if (str[i] == '#')
		{
			tetriminos[k].x[l] = i - ((21 * count) + (5 * j));
			tetriminos[k].y[l] = j;
			l++;
		}
		ft_overside(&l, &k);
		i++;
	}
	return (tetriminos);
}
