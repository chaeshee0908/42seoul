#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char *str1 = "APPLE";
	char *str2 = "aPPLe";
	char *str3 = "\0";
	int num1, num2, num3;

	num1 = ft_str_is_uppercase(str1);
	num2 = ft_str_is_uppercase(str2);
	num3 = ft_str_is_uppercase(str3);
	printf("str1 : %s\n", str1);
	printf("%d\n", num1);
	printf("str2 : %s\n", str2);
	printf("%d\n", num2);
	printf("str3 : %s\n", str3);
	printf("%d\n", num3);
}
