/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkim2 <hkim2@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 23:00:22 by hkim2             #+#    #+#             */
/*   Updated: 2021/03/07 23:11:00 by hkim2            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_board[4][4];
int		g_row[2][4];
int		g_col[2][4];
int		g_col_count[2][4];
int		g_row_count[2][4];
int		check_count();

void	check1(void)
{
	int		i;
	int		c;
	int		max;

	c = 0;
	i = 0;
	max = 0;
	while (c <= 3)
	{
		i = 0;
		max = 0;
		while (i <= 3)
		{
			if (max < g_board[c][i])
			{
				max = g_board[c][i];
				g_col_count[0][c]++;
			}
			i++;
		}
		c++;
	}
}

void	check2(void)
{
	int		max;
	int		i;
	int		c;

	c = 0;
	while (c <= 3)
	{
		i = 3;
		max = 0;
		while (i >= 0)
		{
			if (max < g_board[c][i])
			{
				max = g_board[c][i];
				g_col_count[1][c]++;
			}
			i--;
		}
		c++;
	}
}

void	check3(void)
{
	int		max;
	int		i;
	int		c;

	i = 0;
	while (i <= 3)
	{
		c = 0;
		max = 0;
		while (c <= 3)
		{
			if (max < g_board[c][i])
			{
				max = g_board[c][i];
				g_row_count[0][i]++;
			}
			c++;
		}
		i++;
	}
}

void	check4(void)
{
	int		max;
	int		i;
	int		c;

	i = 0;
	while (i <= 3)
	{
		c = 3;
		max = 0;
		while (c >= 0)
		{
			if (max < g_board[c][i])
			{
				max = g_board[c][i];
				g_row_count[1][i]++;
			}
			c--;
		}
		i++;
	}
}

int		check_building(void)
{
	int		i;
	int		j;
	int		max;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 4)
		{
			g_col_count[i][j] = 0;
			g_row_count[i][j++] = 0;
		}
		i++;
	}
	check1();
	check2();
	check3();
	check4();
	return (check_count());
}
