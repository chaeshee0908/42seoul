#include <stdio.h>

void	ft_swap(int *a, int *b);

int main()
{
	int n1;
	int n2;

	n1 = 3;
	n2 = 5;
	printf("n1 = %d, n2 = %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("n1 = %d, n2 = %d\n", n1, n2);
}
