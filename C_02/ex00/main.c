#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char *src;
	char dest[100];
	char dest1[100];

	src = "Hello";
	printf("src : %s\n", src);
	ft_strcpy(dest, src);
	printf("dest : %s\n", dest);
	strcpy(dest1, src);
	printf("dest1 : %s\n", dest1);
}
