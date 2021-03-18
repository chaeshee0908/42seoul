/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modify_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinseonghee <jinseonghee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:58:56 by jinseonghee       #+#    #+#             */
/*   Updated: 2021/03/17 21:22:17 by jinseonghee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	init_doublemap(int ***map, int col)
{
	*map = malloc(sizeof(int*) * 2);
	(*map)[0] = malloc(sizeof(int) * col);
	(*map)[1] = malloc(sizeof(int) * col);
	init_map(&(*map)[0], col);
	init_map(&(*map)[1], col);
}

void	init_map(int **map, int col)
{
	int	i;

	i = 0;
	while (i < col)
		(*map)[i++] = -1;
}

void	switch_init_map(int **map0, int **map1)
{
	int	*map_temp;

	map_temp = *map0;
	*map0 = *map1;
	*map1 = map_temp;
}

void	ft_free_doublemap(int ***map)
{
	free((*map)[0]);
	free((*map)[1]);
	free(*map);
}
