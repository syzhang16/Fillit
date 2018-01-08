/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:37:47 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:37:49 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_solution(char *str)
{
	int		size;
	char	**tab;
	int		nb;
	int		i;
	t_etri	*tetriminos;

	i = 1;
	tetriminos = ft_map(str, 0, 0, 0);
	nb = ft_count_tetriminos(str);
	tetriminos = ft_reset(tetriminos, nb);
	size = ft_sqrt(nb) * 2 - 1;
	tab = ft_final_tab(size);
	while (ft_print(tab, tetriminos, nb, 0) == 0)
	{
		ft_free(tab, size + i);
		tab = ft_final_tab(size + i);
		ft_print(tab, tetriminos, nb, 0);
		i++;
	}
	ft_display(tab, size + i - 1);
	free(tab);
}
