/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:37:17 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:37:19 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char			**ft_final_tab(int size)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = (char **)malloc((size + 1) * sizeof(*tab));
	while (i != size + 1)
	{
		tab[i] = (char*)malloc((size + 1) * sizeof(tab));
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i][j] = '.';
		j++;
		if (j == size)
		{
			tab[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	return (tab);
}
