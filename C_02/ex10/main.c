#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char *src = "Hello World";
	char dest[100];
	int num;
	int num1;

	printf("src : %s\n", src);
	num = ft_strlcpy(dest, src, 8);
	printf("dest : %s\n", dest);
	num1 = strlcpy(dest, src, 8);
	printf("%d %d\n", num, num1);
	
}
