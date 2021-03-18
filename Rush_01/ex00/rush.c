/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 22:32:23 by hkim2             #+#    #+#             */
/*   Updated: 2021/03/07 23:33:37 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_board[4][4];
int		g_condition[16];
int		g_row[2][4];
int		g_col[2][4];
int		g_isresult;
int		g_col_count[2][4];
int		g_row_count[2][4];
int		check_building(void);
int		dup_search(int col, int row);
int		space_split(char *args);
int		dup_search_ver(void);
void	print_result(void);

void	print_result(void)
{
	int		i;
	int		j;
	char	ch;

	g_isresult = 1;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ch = g_board[i][j++] + '0';
			write(1, &ch, 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

int		recursive(int col, int row, int i)
{
	if (col == 4)
	{
		if (dup_search_ver() || !check_building())
			return (0);
		if (!g_isresult)
			print_result();
		return (0);
	}
	if (row == 4)
	{
		if (!dup_search(col, row - 1))
			recursive(col + 1, 0, 0);
		return (0);
	}
	else
	{
		i = 1;
		while (i <= 4)
		{
			g_board[col][row] = i++;
			recursive(col, row + 1, 0);
		}
	}
	return (0);
}

int		dup_search(int col, int row)
{
	int		arr[5];
	int		i;

	i = 0;
	while (i < 5)
		arr[i++] = 0;
	i = 0;
	while (i <= row)
	{
		if (g_board[col][i] != 0)
			arr[g_board[col][i]]++;
		i++;
	}
	i = 1;
	while (i < 5)
	{
		if (arr[i] >= 2)
			return (1);
		i++;
	}
	return (0);
}

int		dup_search_ver(void)
{
	int		arr[5];
	int		i;
	int		j;
	int		z;

	i = 0;
	while (i < 5)
		arr[i++] = 0;
	i = -1;
	while (++i < 4)
	{
		j = 0;
		z = 0;
		while (j < 4)
			arr[g_board[j++][i]]++;
		while (z < 5)
		{
			if (arr[z] >= 2)
				return (1);
			arr[z++] = 0;
		}
	}
	return (0);
}

int		check_count(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			if (g_col_count[i][j] != g_col[i][j])
				return (0);
			if (g_row_count[i][j] != g_row[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
