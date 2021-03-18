#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main()
{
	int arr[5];
	int i;

	i = 0;
	arr[0] = 3;
	arr[1] = 7;
	arr[2] = 2;
	arr[3] = 1;
	arr[4] = 4;
	while(i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(arr, 5);
	i = 0;
	while(i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
