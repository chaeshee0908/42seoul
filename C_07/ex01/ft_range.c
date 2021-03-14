/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:39:04 by schae             #+#    #+#             */
/*   Updated: 2021/03/13 00:19:10 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long long	size;
	int	*arr;
	int	i;

	i = 0;
	size = (long long)max - min;
	if (size <= 0)
		return (0);
	arr = (int *)malloc(sizeof(int) * size + 1);
	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i++] = min;
		min++;
	}
	return (arr);
}
