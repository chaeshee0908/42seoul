char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	if (!*to_find)
		return (str);
	a = str;
	b = to_find;
	while(*str)
	{
		if (!*b)
			return (str);
		if (*a == *b)
			b++;
		else
			b = to_find;
		str++;
	}
	return (0);
}
