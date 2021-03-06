#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "good morning";
	char dest[] = "hello";
	unsigned int temp;
	
	temp = strlcat(dest, src, 5);
	printf("%d\n", temp);
}
