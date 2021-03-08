#include <stdlib.h>

int ft_strlen(char *str)
{
	int num;

	num = 0;
	while (*str++)
		num++;
	return (num);
}

char *ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *ret;
	char *ptr;
	int ret_len;
	int i;

	i = 0;
	ret_len = 0;
	if (size == 0)
	{
		ret = (char *)malloc(1);
		ret = "\0";
		return (ret);
	}
	while (i < size)
		ret_len += ft_strlen(strs[i++]);
	ret = (char *)malloc(sizeof(char) * (ret_len + (size - 1) * ft_strlen(sep) + 1));
	i = 0;
	ptr = ft_strcat(ret, strs[i]);
	while(++i < size)
	{
		ptr = ft_strcat(ptr, sep);
		ptr = ft_strcat(ptr, strs[i]);
	}
	*ptr = '\0';
	return (ret);
}
