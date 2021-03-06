char	*ft_strcat(char *dest, char *src)
{
	char *str;
	str = dest;
	while(*str)
		str++;
	while(*src)
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (dest);
}
