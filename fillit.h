/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 23:36:41 by akhoucha          #+#    #+#             */
/*   Updated: 2018/01/04 23:40:49 by akhoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# define BUFFER 4096

typedef	struct	s_etri
{
	int			x[4];
	int			y[4];
}				t_etri;

size_t			ft_strlen(const char *str);
int				ft_sqrt(int nb);
int				ft_check_links(char *str, int i);
int				ft_check_char(char *str);
int				ft_check_tetriminos(char *str, int i);
int				ft_check_nl(char *str);
int				ft_check_diese(char *str, int i);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_display(char **tab, int size);
void			ft_free(char **tab, int size);
char			**ft_final_tab(int size);
t_etri			*ft_map(char *str, int i, int j, int k);
char			*ft_read_file(int argc, char **argv);
t_etri			*ft_reset(t_etri *tetriminos, int nb);
void			ft_solution(char *str);
int				ft_possibilities(char **tab, t_etri tetriminos,
		int posi, int size);
int				ft_count(char **tab, int size);
void			ft_place(char **tab, t_etri tetriminos, int position, int k);
int				ft_print(char **tab, t_etri *tetriminos, int nb, int k);
void			ft_remove(char **tab, int k, int size);
int				ft_tetriminos(char *str);
int				ft_count_tetriminos(char *str);

#endif
