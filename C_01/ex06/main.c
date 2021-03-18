#include <stdio.h>

int	ft_strlen(char *str);

int main()
{
	char *str;
	int num;

	str = "hello";
	num = ft_strlen(str);
	printf("num is %d\n", num);
}
