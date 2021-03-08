/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:39:04 by schae             #+#    #+#             */
/*   Updated: 2021/03/08 14:39:07 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return (0);
	arr = (int *)malloc(sizeof(int) * size + 1);
	arr[size] = 0;
	while (i < size)
	{
		arr[i++] = min;
		min++;
	}
	return (arr);
}
