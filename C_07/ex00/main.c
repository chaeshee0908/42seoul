#include <stdio.h>

char *ft_strdup(char *src);

int main()
{
	char *str = "Hello World!";

	printf("%s\n", ft_strdup(str));
}
