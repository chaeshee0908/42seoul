#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main()
{
	int	nb;
	int	num;

	nb = 5;
	num = ft_recursive_factorial(nb);
	printf("%d\n", num);
}
