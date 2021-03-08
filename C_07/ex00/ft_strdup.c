#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *ptr;
	int n;

	n = 0;
	while (src[n])
	{
		n++;
	}
	ptr = (char *)malloc(sizeof(char)* n + 1);
	ptr[n] = '\0';
	while (n--)
		ptr[n] = src[n];
	return (ptr);
}
