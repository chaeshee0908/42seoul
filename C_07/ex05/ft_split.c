#include <stdlib.h>

int count_str(char *str, char *charset)
{
	int num;
	int i;

	num = 0;
	i = 0;
	while (str[i++])
		if (*str == *charset)
			num++;
	return (num + 1);
}

char **ft_split(char *str, char *charset)
{
	char **ret;
	int row;
	int i;
	int j;
	int now;
	int len;
	int c_len;

	row = count_str(str, charset);
	ret = (char **)malloc(row + 1);
	i = 0;
	j = 0;
	now = 0;
	while (i < row)
	{
		len = 0;
		while (str[now++] != *charset)
			len++;
		c_len = len;
		ret[i] = (char *)malloc(len + 1);
		while (j <= now)
		{
			ret[i][len - (c_len--)] = str[j];
			j++;
		}
		while (str[now] == *charset)
			now++;
		ret[i++][now] = '\0';
	}
	ret[i] = (char*)malloc(1);
	ret[i] = "\0";
	return (ret);
}
