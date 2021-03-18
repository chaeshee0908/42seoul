#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
	char *str1;
	char *str2;
	char *str3;
	int num1;
	int num2;
	int num3;

	str1 = "I have 5 pencils";
	str2 = "Hello";
	str3 = "\0";
	num1 = ft_str_is_alpha(str1);
	num2 = ft_str_is_alpha(str2);
	num3 = ft_str_is_alpha(str3);
	printf("str1 : %s\n", str1);
	printf("%d\n", num1);
	printf("str2 : %s\n", str2);
	printf("%d\n", num2);
	printf("str3 : %s\n", str3);
	printf("%d\n", num3);
}
