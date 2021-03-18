#include <stdio.h>
//#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[] = "ckuUTPYbJwnAhUgqsGaIUwndhVejzJGmOBtIxfunt";
	char src[] = "S";
	unsigned int tmp1;
	
	tmp1 = ft_strlcat(dest, src, 65);
	printf("%d\n", tmp1);
	printf("%s\n", dest);
}
