int ft_strlen(char *str)
{
	int num;

	num = 0;
	while (*str)
	{
		str++;
		num++;
	}
	return (num);
}
