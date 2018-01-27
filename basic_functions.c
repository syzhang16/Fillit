/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:35:23 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:36:24 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i * i < nb)
		i++;
	return (i);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_count_tetriminos(char *str)
{
	int		ret;

	ret = ft_strlen(str) / 21 + 1;
	return (ret);
}
