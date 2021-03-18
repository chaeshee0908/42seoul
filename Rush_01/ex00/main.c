/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:06:28 by hkim2             #+#    #+#             */
/*   Updated: 2021/03/07 23:40:39 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_condition[16];
int		g_row[2][4];
int		g_col[2][4];
int		g_col_count[2][4];
int		g_row_count[2][4];
int		recursive(int col, int row, int i);
int		g_isresult;

int		in_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		check_args(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && in_num(str[i]))
		{
			if (in_num(str[i + 1]))
				return (0);
		}
		else if (in_num(str[i]))
		{
			if (in_num(str[i - 1]) || in_num(str[i + 1]))
				return (0);
		}
		i++;
	}
	return (1);
}

int		space_split(char *args)
{
	int		len;
	char	tmp[17];
	int		count;

	count = 0;
	len = 0;
	while (*(args + len))
	{
		if (*(args + len) <= '4' && *(args + len) >= '1')
		{
			g_condition[count] = *(args + len) - '0';
			count++;
		}
		len++;
	}
	if (count == 16)
		return (1);
	else
		return (0);
}

void	init(void)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			g_row[i][j++] = g_condition[count++];
		}
		i++;
	}
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
			g_col[i][j++] = g_condition[count++];
		i++;
	}
}

int		main(int argc, char **args)
{
	char	str[17];

	if (!check_args(args[1]))
	{
		write(1, "Error", 5);
		return (0);
	}
	else if (!space_split(args[1]))
		write(1, "Error", 5);
	else
	{
		init();
		if (recursive(0, 0, 0) == 0 && !g_isresult)
		write(1, "Error", 5);
	}
	}
