/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 01:54:26 by schae             #+#    #+#             */
/*   Updated: 2021/03/11 22:22:45 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		b_same(char *str)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		b_sign(char *str)
{
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (1);
		str++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int		num;

	num = 0;
	while (*str)
	{
		str++;
		num++;
	}
	return (num);
}

void	ft_putnbr(int nb, int b, char *base)
{
	char	c;

	if (nb >= b)
	{
		ft_putnbr(nb / b, b, base);
		ft_putnbr(nb % b, b, base);
	}
	else
	{
		c = base[nb];
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	int		i;
	int		j;

	b = ft_strlen(base);
	if (*base == '\0' || b == 1 || b_sign(base) || b_same(base))
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		i = nbr / (-b);
		j = nbr % (-b);
		ft_putnbr(i, b, base);
		ft_putnbr(j, b, base);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		ft_putnbr(nbr, b, base);
	}
	else
		ft_putnbr(nbr, b, base);
}
