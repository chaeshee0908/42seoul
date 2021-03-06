char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *str;
	unsigned int	i;

	i = 0;
	str = dest;
	while (*str)
		str++;
	while (*src && i < nb)
	{
		*str = *src;
		str++;
		src++;
		i++;
	}
	*str = '\0';
	return (dest);
}
