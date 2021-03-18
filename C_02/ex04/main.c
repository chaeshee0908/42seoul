#include <stdio.h>

int ft_str_is_lowercase(char *str);

int	main()
{
	char *str1;
	char *str2;
	char *str3;
	int num1;
	int num2;
	int num3;

	str1 = "apple";
	str2 = "Apple";
	str3 = "\0";
	num1 = ft_str_is_lowercase(str1);
	num2 = ft_str_is_lowercase(str2);
	num3 = ft_str_is_lowercase(str3);
	printf("str1 : %s\n", str1);
	printf("%d\n", num1);
	printf("str2 : %s\n", str2);
	printf("%d\n", num2);
	printf("str3 : %s\n", str3);
	printf("%d\n", num3);
}
