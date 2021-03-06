/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:39:06 by schae             #+#    #+#             */
/*   Updated: 2021/03/05 21:46:41 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	prime;
	int	i;

	if (nb <= 2)
		return (2);
	i = 2;
	prime = nb;
	while (i < prime)
	{
		if (prime % i == 0)
			prime++;
		i++;
	}
	return (prime);
}
