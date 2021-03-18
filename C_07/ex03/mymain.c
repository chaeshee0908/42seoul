#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char *str[] = {"one", "two", "three", "four"};

	printf("%s\n", ft_strjoin(4, str, "0000"));
}
