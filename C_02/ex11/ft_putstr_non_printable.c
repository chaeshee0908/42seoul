/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 20:46:58 by schae             #+#    #+#             */
/*   Updated: 2021/03/07 11:41:45 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hex(unsigned char c)
{
	unsigned char c1;
	unsigned char c2;

	c1 = (int)c / 16;
	c2 = (int)c % 16;
	c1 = c1 + '0';
	c2 = c2 + '0';
	if (c1 > '9')
		c1 += 39;
	if (c2 > '9')
		c2 += 39;
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n" ,1);
}
