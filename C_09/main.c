#include "all.h"
#include <stdio.h>
int main()
{
        int a = 5;
        int b = 10;
	int num;
	char *str = "hello\n";
        ft_swap(&a, &b);
	num = ft_strlen(str);
	printf("%d %d %d\n", a, b, num);
}
