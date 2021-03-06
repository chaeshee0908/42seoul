/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:46:54 by schae             #+#    #+#             */
/*   Updated: 2021/03/16 20:03:51 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int			i;
	int			check;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	check = nb / 2;
	while (i <= check)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
