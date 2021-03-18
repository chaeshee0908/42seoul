/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:39:06 by schae             #+#    #+#             */
/*   Updated: 2021/03/16 10:24:19 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int			prime;
	long long	check;
	int			i;

	check = 0;
	if (nb <= 2)
		return (2);
	i = 2;
	prime = nb;
	while (check * check <= (long long)nb)
		check++;
	while (i < check)
	{
		if (prime % i == 0)
		{
			prime++;
			i = 2;
			continue;
		}
		i++;
	}
	return (prime);
}
