#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int *arr;
	int i;

	i = 0;
	arr = ft_range(1,49);
	while (arr[i])
		printf("%d ", arr[i++]);
	printf("\n");
}