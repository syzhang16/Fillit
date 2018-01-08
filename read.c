/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:41:08 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/05 00:09:40 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

static	void	check_arg(int argc)
{
	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source file\n");
		exit(0);
	}
}

char			*ft_read_file(int argc, char **argv)
{
	int		fd;
	char	*str;
	char	buf[BUFFER + 1];
	int		ret;

	check_arg(argc);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("error\n");
		exit(0);
	}
	while ((ret = read(fd, buf, BUFFER)) > 0)
	{
		str = buf;
		buf[ret] = '\0';
	}
	if (buf[ret] <= 0)
	{
		ft_putstr("error\n");
		exit(0);
	}
	str[BUFFER] = '\0';
	close(fd);
	return (str);
}
