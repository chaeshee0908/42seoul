#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int main()
{
	char s1[20] = "Hello";
	char s2[10] = "World!";
	char s3[20] = "Hello";
	char s4[10] = "World!";

	strcat(s1, s2);
	ft_strcat(s3, s4);
	printf("%s\n", s1);
	printf("%s\n", s3);
}
