/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 22:10:44 by schae             #+#    #+#             */
/*   Updated: 2021/02/25 19:03:32 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b)
{
	ft_putchar(a);
	ft_putchar(b);
}

void	option(char *x, char *y)
{
	if (*x <= '9' && *y > '9')
	{
		*y = '0';
		(*x)++;
	}
}

void	ft_print_comparison(char a, char b, char c, char d)
{
	if (a < c || (a == c && b < d))
	{
		ft_print(a, b);
		ft_putchar(' ');
		ft_print(c, d);
		if (a != '9' || b != '8')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	char arr[4];

	arr[0] = '0';
	arr[1] = '0';
	arr[2] = '0';
	arr[3] = '1';
	while (arr[0] != '9' || arr[1] != '9')
	{
		while (arr[2] <= '9' || (arr[2] == '9' && arr[3] <= '9'))
		{
			ft_print_comparison(arr[0], arr[1], arr[2], arr[3]);
			arr[3]++;
			option(&arr[2], &arr[3]);
		}
		arr[2] = '0';
		arr[3] = '0';
		arr[1]++;
		if (arr[1] > '9')
		{
			arr[1] = '0';
			arr[0]++;
		}
	}
}
