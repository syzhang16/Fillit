/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:40:58 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:41:51 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_check_diese(char *str, int i)
{
	int		count;

	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			count++;
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
		{
			if (count != 4)
				return (0);
			count = 0;
		}
		i++;
	}
	return (1);
}

int				ft_check_tetriminos(char *str, int i)
{
	int		x;
	int		y;
	int		count;

	x = 1;
	y = 0;
	count = 1;
	if (ft_check_char(str) == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
			return (0);
		if (str[i] == '\n' && (str[i + 1] == '\n' || str[i + 1] == '\0'))
		{
			if (i != (19 * x) + (y * 2))
				return (0);
			x++;
			y++;
			count++;
		}
		i++;
	}
	return (1);
}

int				ft_check_char(char *str)
{
	if (str[ft_strlen(str) - 1] != '\n' || ((int)ft_strlen(str) / 21 + 1 > 27))
		return (0);
	if ((str[ft_strlen(str) - 1] == '\n') && (str[ft_strlen(str) - 2] == '\n'))
		return (0);
	return (1);
}

int				ft_check_nl(char *str)
{
	int		i;

	i = 20;
	while (str[i] != '\0' && i < (int)ft_strlen(str))
	{
		if (str[i] != '\n')
			return (0);
		i += 21;
	}
	if (str[(int)ft_strlen(str)] != '\0')
		return (0);
	return (1);
}
