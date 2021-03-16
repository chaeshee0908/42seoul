#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
	int num;

	num = 0;
	while (*str)
	{
		str++;
		num++;
	}
	return (num);
}

void	ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *s;
	int i;

	s = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s)
		return (0);
	i = 0;
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = (char*)malloc(s[i].size + 1);
		s[i].copy = (char*)malloc(s[i].size + 1);
		ft_strcpy(s[i].str, av[i]);
		ft_strcpy(s[i].copy, av[i]);
		i++;
	}
	s[i].size = 0;
	s[i].str = 0;
	s[i].copy = 0;
	return (s);
}

int main(int ac, char **av)
{
	t_stock_str *a;
	int i;
	i = 0;
	while (i < ac)
	{
		a = ft_strs_to_tab(ac, &av[i]);
		printf("size : %d\nstr : %s\ncopy : %s\n", a->size, a->str, a->copy);
		i++;
	}
}