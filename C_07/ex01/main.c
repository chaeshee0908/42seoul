/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 06:42:10 by shpark            #+#    #+#             */
/*   Updated: 2021/03/14 17:40:19 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int		*a(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;

	if (min >= max)
		return (0);
	range = max - min - 1;
	if ((buffer = malloc(range * sizeof(int))) == NULL)
		return (0);
	index = 0;
	while (index <= range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}

void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int	min;
	int	max;

	min = 5;
	max = 10;
	printf("=====YOUR ANSWER=====\n");
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(ft_range(min, max), max - min);
	printf("\n");
	printf("=====REAL ANSWER=====\n");
	printf("min = %d, max = %d -> ", min, max);
	debug_dump_array(a(min, max), max - min);
	printf("\n");
}
