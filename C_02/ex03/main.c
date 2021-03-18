#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
	char *str1;
	char *str2;
	char *str3;
	int num1;
	int num2;
	int num3;

	str1 = "012345678901";
	str2 = "0a1b2c";
	str3 = "\0";
	num1 = ft_str_is_numeric(str1);
	num2 = ft_str_is_numeric(str2);
	num3 = ft_str_is_numeric(str3);
	printf("str1 : %s\n", str1);
	printf("%d\n", num1);
	printf("str2 : %s\n", str2);
	printf("%d\n", num2);
	printf("str3 : %s\n", str3);
	printf("%d\n", num3);
}
