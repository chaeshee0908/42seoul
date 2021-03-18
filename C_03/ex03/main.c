#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main()
{
	char	s1[20] = "Hello World";
	char	s2[10] = " ABCDEF";
	char	s3[20] = "Hello World";
	char	s4[10] = " ABCDEF";

	strncat(s1, s2, 4);
	ft_strncat(s3, s4, 4);
	printf("%s\n", s1);
	printf("%s\n", s3);
}
