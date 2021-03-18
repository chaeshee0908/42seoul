#include <stdio.h>

char	*ft_strupcase(char *str);

int	main()
{
	char str[] = "Hello World";

	printf("Before : %s\n", str);
	ft_strupcase(str);
	printf("After : %s\n", str);
}
