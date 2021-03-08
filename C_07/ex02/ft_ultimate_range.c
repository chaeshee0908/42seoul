/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 00:12:39 by schae             #+#    #+#             */
/*   Updated: 2021/03/09 00:12:41 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;

	size = max - min;
	if (size <= 0)
		return (0);
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	arr = *range;
	while (min < max)
	{
		*arr = min++;
		arr++;
	}
	return (size);
}
