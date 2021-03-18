/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 22:29:04 by schae             #+#    #+#             */
/*   Updated: 2021/03/11 16:05:31 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int pnb;

	if (nb < 0)
		pnb = nb * (-1);
	if (nb >= 0)
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar('-');
		if (pnb >= 10)
		{
			ft_putnbr(pnb / 10);
			ft_putnbr(pnb % 10);
		}
		else
			ft_putchar(pnb + '0');
	}
}
