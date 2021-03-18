#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, int n);

int	main()
{
	char *s1 = "Hello World";
	char *s2 = "Hello";
	int num1, num2;

	num1 = ft_strncmp(s1, s2, 5);
	num2 = strncmp(s1, s2, 5);
	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}
