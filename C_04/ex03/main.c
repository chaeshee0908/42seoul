#include <stdio.h>

int	ft_atoi(char *str);

int main(int argc, char *argv[])
{
	int num;
	if (argc ==2)
	{
		num = ft_atoi(argv[1]);
		printf("%d\n", num);
	}
}
