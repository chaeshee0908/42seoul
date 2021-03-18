/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:14:36 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 12:07:11 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	num;

	num = 1;
	if (nb <= 0)
		return (0);
	while (1)
	{
		if (num * num < nb)
			num++;
		else if (num * num == nb)
			return (num);
		else
			return (0);
	}
}
