#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int *arr;

	arr = ft_range(1,3);
	while (*arr)
		printf("%d ", *(arr++));
	printf("\n");
}
