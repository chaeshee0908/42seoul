/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 20:45:26 by schae             #+#    #+#             */
/*   Updated: 2021/03/16 10:23:53 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fib(int index, int f, int b)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (f);
	if (index == 2)
		return (b);
	return (ft_fib(index - 1, b, f + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (ft_fib(index, 1, 1));
}
