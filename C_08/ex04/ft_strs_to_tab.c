#include <stdlib.h>
#include "ft_stock_str.h"

int strlen(char *str)
{
	int num;

	num = 0;
	while (*(str++))
		num++;
	return (num);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	char **str;
	char *s;

	*str = (char *)malloc((char*) * (ac);
	while (ac--)
	{
		
	}
}

int main(int ac, char **av)
{
	ft_strs_to_tab(ac, av);
}
