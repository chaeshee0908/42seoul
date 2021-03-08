#include <stdio.h>

char **ft_split(char *str, char *charset);

int main()
{
	char *str = "Hello my name is schae";
	char **result;
	int i;

	i = 0;
	result = ft_split(str, "&");
	while (result[i])
		printf("%s\n", result[i++]);
}
