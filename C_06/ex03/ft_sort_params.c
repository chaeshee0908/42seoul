/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:52:15 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 17:54:42 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_params(int argc, char *argv[])
{
	int		now;
	int		index;
	int		m_num;
	char	*min;

	now = 1;
	while (now < argc)
	{
		index = now + 1;
		min = argv[now];
		while (index < argc)
		{
			if (ft_strcmp(min, argv[index]) > 0)
			{
				min = argv[index];
				m_num = index;
			}
			index++;
		}
		swap(&argv[m_num], &argv[now]);
		now++;
	}
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
