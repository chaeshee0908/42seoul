/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_etc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinseonghee <jinseonghee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:58:38 by jinseonghee       #+#    #+#             */
/*   Updated: 2021/03/17 17:31:10 by jinseonghee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			ft_strlen(char *str)
{
	long	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

int			ft_is_number(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int			ft_atoi(char *str)
{
	int	res;

	res = 0;
	while (ft_is_number(*str))
		res = 10 * res + *str++ - '0';
	return (res);
}

void		ft_fill_nbr(char **res, int nbr, int idx)
{
	if (nbr < 10)
		(*res)[idx] = nbr + '0';
	else
	{
		ft_fill_nbr(res, nbr % 10, idx);
		ft_fill_nbr(res, nbr / 10, idx - 1);
	}
}

char		*ft_itoa(int nbr)
{
	char	*nb_row;
	int		len;
	int		count;

	if (nbr == 0)
		return ("0");
	if (nbr == 1)
		return ("1");
	len = 1;
	count = 1;
	while (count <= nbr)
	{
		count = count * 10;
		len++;
	}
	if (!(nb_row = malloc(sizeof(char) * len)))
		return (0);
	ft_fill_nbr(&nb_row, nbr, len - 2);
	nb_row[len - 1] = '\0';
	return (nb_row);
}
