#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char s1[30] = "A Garden Diary";
	char s2[30] = "A Garden Diary";
	char *to_find1 = "den";
	char *to_find2 = "den";
	char *str1;
	char *str2;

	str1 = strstr(s1, to_find1);
	str2 = ft_strstr(s2, to_find2);
	printf("%s\n", str1);
	printf("%s\n", str2);
}
