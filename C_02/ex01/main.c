#include <stdio.h>
#include <string.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char *src;
	char dest[100];
	char dest1[100];
	int n;

	n = 8;
	src = "Hello";
	ft_strncpy(dest, src, n);
	strncpy(dest1, src, n);
	printf("src : %s\n", src);
	printf("dest : %s\n", dest);
	printf("dest1 : %s\n", dest1);
	return (0);
}
