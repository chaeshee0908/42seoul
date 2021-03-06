#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main()
{
	char *s1 = "Hello World!";
	int n1, n2;

	n1 = strlen(s1);
	n2 = ft_strlen(s1);
	printf("%d\n%d\n", n1, n2);
}
