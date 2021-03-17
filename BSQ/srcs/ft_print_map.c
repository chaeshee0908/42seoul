/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinseonghee <jinseonghee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:59:00 by jinseonghee       #+#    #+#             */
/*   Updated: 2021/03/17 21:24:15 by jinseonghee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(char *buf, int *res, t_map_info *info)
{
	int	value;
	int max;
	int	i;
	int	line;
	int	stop;

	max = res[1];
	i = -1;
	value = res[0];
	line = (value - 1) * -(info->col + 1);
	stop = 0;
	while (buf[++i])
	{
		if (i >= max + line - value + 1 && i <= max + line && stop == 0)
		{
			if (i == max + line)
				line = line + info->col + 1;
			if (line > 0)
				stop = 1;
			buf[i] = info->fill;
		}
	}
	write(1, &buf[0], i);
}

int		print_global(char *buf)
{
	t_map_info	*info;
	int			*res;
	int			ij[2];

	if (buf != NULL)
	{
		info = get_map_info(&buf);
		ij[0] = 0;
		ij[1] = 0;
		init_res(&res);
		ft_make_map(buf, info, ij, &res);
		if (res[0] == -1)
			write(1, "map error\n", 10);
		else
			print_map(buf, res, info);
		if (res)
			free(res);
		buf = buf - info->nb_char;
		free(info);
		free(buf);
	}
	else
		write(1, "map error\n", 10);
	return (0);
}

void	ft_make_map(char *buf, t_map_info *info, int *ij, int **res)
{
	int		**map;

	init_doublemap(&map, info->col);
	while (buf[ij[0] * (info->col + 1) + ij[1]] && ij[0] < info->row)
	{
		while (ij[1] < info->col)
		{
			ft_fill_map(buf, ij, info, &map);
			ft_fill_res(res, &map, ij, info);
			if ((*res)[0] == -1)
				return ;
			ij[1]++;
		}
		if (buf[ij[0]++ * (info->col + 1) + ij[1]] != '\n')
		{
			ft_free_doublemap(&map);
			(*res)[0] = -1;
			return ;
		}
		ij[1] = 0;
		switch_init_map(&map[0], &map[1]);
	}
	if (buf[ij[0] * (info->col + 1) + ij[1]] != '\0' || ij[0] != info->row)
		(*res)[0] = -1;
	ft_free_doublemap(&map);
}
