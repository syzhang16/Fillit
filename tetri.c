/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetri.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:42:09 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:43:09 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_count(char **tab, int size)
{
	int		j;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i][j] == 'A' + k)
			{
				k++;
				i = 0;
				j = 0;
			}
			j++;
		}
		i++;
	}
	return (k);
}

void	ft_place(char **tab, t_etri tetriminos, int position, int k)
{
	int		i;
	int		j;
	int		p;
	int		size;

	p = 0;
	size = ft_strlen(tab[0]);
	i = position / size;
	j = position % size;
	while (p < 4)
	{
		tab[i + tetriminos.y[p]][j + tetriminos.x[p]] = 'A' + k;
		p++;
	}
}

int		ft_print(char **tab, t_etri *tetriminos, int nb, int k)
{
	int		position;
	int		size;

	size = ft_strlen(tab[0]);
	position = 0;
	if (ft_count(tab, size) == nb)
		return (1);
	while (position <= size * size)
	{
		if (ft_possibilities(tab, tetriminos[k], position, size))
		{
			ft_place(tab, tetriminos[k], position, k);
			if (ft_print(tab, tetriminos, nb, k + 1))
				return (1);
			ft_remove(tab, k, size);
		}
		position++;
	}
	return (0);
}

void	ft_remove(char **tab, int k, int size)
{
	int i;
	int j;

	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j <= size)
		{
			if (tab[i][j] == 'A' + k)
				tab[i][j] = '.';
			j++;
		}
		i++;
	}
}

int		ft_possibilities(char **tab, t_etri tetriminos, int posi, int size)
{
	int		i;
	int		j;
	int		c;

	c = 0;
	i = posi / size;
	j = posi % size;
	while (c < 4)
	{
		if ((i + tetriminos.y[c] > size - 1 || j + tetriminos.x[c] > size - 1))
			return (0);
		if ((i + tetriminos.y[c]) < 0 || (j + tetriminos.x[c]) < 0)
			return (0);
		if ((tab[i + tetriminos.y[c]][j + tetriminos.x[c]] != '.'))
			return (0);
		c++;
	}
	return (1);
}
