int ft_strlen(char *str)
{
	int nb;

	nb = 0;
	while(*(str++))
		nb++;
	return (nb);
}
