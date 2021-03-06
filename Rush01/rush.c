#include <unistd.h>

int g_condition[16];
int g_board[4][4];
int *g_start_ptr[4];
int g_arr[5];

g_arr = {0,1,2,3,4};

int	check_condition(char *str)
{
	int num;

	num = 0;
	while (*str)
	{
		if(*str >= '1' && *str <= '4')
		{	
			g_condition[num] = *str - '0';
			num++;
		}
		str++;
	}
	if (num == 16)
		return (1);
	else
		return (0);
}

void fill_row()
	int cnt;
	int max;
	int i;

	cnt = 0;
	row = 0;
	i = 0
	fill_row(row, i);
	max = ptr[0];
	while (ptr[i])
	{
		if (max < ptr[i])
		{
			max = ptr[i]
			cnt++;
		}
		if (cnt > g_condition[8])
			
			
	}
	
}
