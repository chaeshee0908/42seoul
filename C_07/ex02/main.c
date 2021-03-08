#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int arr[] = {0, 1, 2, 3, 4};

	printf("%d\n", ft_ultimate_range((int **)&arr, 3, 7));
}
