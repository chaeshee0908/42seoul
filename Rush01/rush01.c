#include <unistd.h>

int g_condition[16];
int g_board[4][4];
int g_copy[4][4];
int g_case_1[6][4] = {
	{4,1,2,3},
	{4,1,3,2},
	{4,2,1,3},
	{4,2,3,1},
	{4,3,1,2},
	{4,3,2,1}
};
int g_case_2[11][4] = {
	{1,4,2,3},
	{1,4,3,2},
	{2,4,1,3},
	{2,4,3,1},
	{2,1,4,3},
	{3,4,1,2},
	{3,4,2,1},
	{3,1,4,2},
	{3,1,2,4},
	{3,2,1,4},
	{3,2,4,1}
};
int g_case_3[3][4] = {
	{1,2,4,3},
	{1,3,4,2},
	{2,3,4,1}
}
int g_case_4[4] = {1,2,3,4};

int check_condition(char *str)
{
	int num;

	num = 0;
	while(*str)
	{
		if (*str >= '1' && *str <= '4')
		{
			g_condition[num] = *str - '0';
			num ++;
		}
		str++;
	}
	if (num == 16)
		return (1);
	else
		return (0);
}

int find_fix_line()
{
	int i;
	int j;

	i = 0;
	j = 8;
	while (i < 4)
	{
		if (g_condition[i] + g_condition[i + 4] == 5)
			fill_fix_line(i);
	}
	while (j < 12)
	{
		if (g_condition[j] + g_condition[j + 4] == 5)
			fill_fix_line(j);
	}
}

int fill_fix_line(int i, int j)	// n+1 상황일 때 가정
{
	int num;
	int i_row;
	int j_col;

	num = 1;
	i_row = 0;
	if (g_condition[i] == 1)

}

int find_fix_value(int i)
{
	int l, m, n;
	m = 0;
	n = 0;
	l = 0;
	if (g_condition[i] == 1)
		while(m < 4)
		{
			g_board[m][i] = g_case_4[3 - m];
			m++;
		}
	if (g_condition[i] == 2)
		while(m < 11)
		{
			while(n < 3 && l < 4)
			{
				while (g_case_1[m][l] != g_case_4[n][3 - l])
				{
					l = 0;
				}
				l++;
				n++;
			}
			m++;
		}

}
