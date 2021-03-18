/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinseonghee <jinseonghee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:58:52 by jinseonghee       #+#    #+#             */
/*   Updated: 2021/03/17 21:22:12 by jinseonghee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_map_info	*get_map_info(char **buf)
{
	int			i;
	int			j;
	t_map_info	*info;

	if (!(info = malloc(sizeof(t_map_info))))
		return (0);
	i = 0;
	while ((*buf)[i] != '\n')
		i++;
	info->empty = (*buf)[i - 3];
	info->obs = (*buf)[i - 2];
	info->fill = (*buf)[i - 1];
	info->nb_char = i + 1;
	(*buf)[i - 3] = '\0';
	info->row = ft_atoi(*buf);
	(*buf)[i - 3] = info->empty;
	(*buf) = (*buf) + i + 1;
	j = 0;
	if (info->row > 0)
		while ((*buf)[j] != '\n' && (*buf)[j] != '\0')
			j++;
	info->col = j;
	return (info);
}

int			ft_min_close(int **map, int i, int j)
{
	int n_min;

	if (i == 0 || j == 0)
		return (0);
	n_min = map[0][j];
	if (map[0][j - 1] < n_min)
		n_min = map[0][j - 1];
	if (map[1][j - 1] < n_min)
		n_min = map[1][j - 1];
	return (n_min);
}

void		ft_fill_map(char *buf, int *ij, t_map_info *info, int ***map)
{
	if (buf[ij[0] * (info->col + 1) + ij[1]] == info->obs)
		(*map)[1][ij[1]] = 0;
	else if (buf[ij[0] * (info->col + 1) + ij[1]] == info->empty)
		(*map)[1][ij[1]] = ft_min_close(*map, ij[0], ij[1]) + 1;
	else
		(*map)[1][ij[1]] = -1;
}

void		ft_fill_res(int **res, int ***map, int *ij, t_map_info *info)
{
	if ((*map)[1][ij[1]] == -1)
	{
		(*res)[0] = -1;
		ft_free_doublemap(map);
	}
	else if ((*map)[1][ij[1]] > (*res)[0])
	{
		(*res)[0] = (*map)[1][ij[1]];
		(*res)[1] = ij[0] * (info->col + 1) + ij[1];
	}
}

void		init_res(int **res)
{
	*res = malloc(sizeof(int) * 2);
	(*res)[0] = -1;
	(*res)[1] = -1;
}
