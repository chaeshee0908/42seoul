#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int arr[6];
	int i;

	i = 0;
	while(i < 6)
	{
		arr[i] = i;
		i++;
	}
	i = 0;
	while(i < 6)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_rev_int_tab(arr, 6);
	while(i < 6)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}
