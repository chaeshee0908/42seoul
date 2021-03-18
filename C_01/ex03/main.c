#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int n1;
	int n2;
	int div;
	int mod;

	n1 = 15;
	n2 = 6;
	printf("n1 = %d, n2 = %d\n", n1, n2);
	ft_div_mod(n1, n2, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
}
