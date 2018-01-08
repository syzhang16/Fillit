/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_links.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:37:32 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:37:33 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_check_links(char *str, int i)
{
	int		links;
	int		count;

	links = 0;
	count = 20;
	while (i < (int)ft_strlen(str))
	{
		links = 0;
		while ((i != count + 1) && (i < (int)ft_strlen(str)))
		{
			if (str[i] == '#' && str[i + 1] == '#' && (i + 1 < count + 1))
				links++;
			if (str[i] == '#' && str[i - 1] == '#' && (i - 1 > count - 21))
				links++;
			if (str[i] == '#' && str[i + 5] == '#' && (i + 5 < count + 1))
				links++;
			if (str[i] == '#' && str[i - 5] == '#' && (i - 5 > count - 21))
				links++;
			i++;
		}
		if (links != 6 && links != 8)
			return (0);
		count = count + 21;
	}
	return (1);
}
