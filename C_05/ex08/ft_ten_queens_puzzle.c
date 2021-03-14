/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 21:49:18 by schae             #+#    #+#             */
/*   Updated: 2021/03/13 18:33:45 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_col[10];
int		g_cnt;

void	init(void)
{
	int	i;

	i = 0;
	while (i < 10)
		g_col[i++] = 0;
	g_cnt = 0;
}

int		ABS(int nb)
{
	if (nb < 0)
		return (-nb);
	else
		return (nb);
}

int		isPossible(int now)
{
	int	i;

	i = 0;
	while (i < now)
	{
		if (g_col[i] == g_col[now] || ABS(now - i) == ABS(g_col[now] - g_col[i]))
			return (0);
		i++;
	}
	return (1);
}

int		checking_queens(int now)
{
	int		i;
	char	c;

	i = 0;
	if (now == 10)
	{
		while (i < 10)
		{
			c = g_col[i] + '0';
			write(1, &c, 1);
			i++;
		}
		g_cnt++;
		write(1, "\n", 1);
	}
	else
	{
		while (i < 10)
		{
			g_col[now] = i++;
			if (isPossible(now))
				checking_queens(now + 1);
		}
	}
	return (g_cnt);
}

int		ft_ten_queens_puzzle(void)
{
	init();
	return (checking_queens(0));
}
