#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main()
{
	char *s1 = "Hello World";
	char *s2 = "Hello";
	int num1;
	int num2;

	num1 = ft_strcmp(s1, s2);
	num2 = strcmp(s1, s2);
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}
