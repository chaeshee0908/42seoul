#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char str[] = "  sAlut, comMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("Before : %s\n", str);
	ft_strcapitalize(str);
	printf("After : %s\n", str);
}
