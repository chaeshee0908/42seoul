#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int a;
	int b;

	a = 15;
	b = 6;
	printf("a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}
