#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main()
{
	char *str = "Hello World!";
	
	printf("strdup -> %s\n", strdup(str));
	printf("ft_strdup ->%s\n", ft_strdup(str));
}
