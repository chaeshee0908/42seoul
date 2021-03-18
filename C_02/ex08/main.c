#include <stdio.h>

char	*ft_strlowcase(char *str);

int main()
{
	char str[] = "HELLO WorlD";
	
	printf("Before : %s\n", str);
	ft_strlowcase(str);
	printf("After : %s\n", str);
}
