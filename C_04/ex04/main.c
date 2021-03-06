void	ft_putnbr_base(int nbr, char *base);

int		ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int		main(int argc, char *argv[])
{
	int	nbr;

	if (argc == 3)
	{
		nbr = ft_atoi(argv[1]);
		ft_putnbr_base(nbr, argv[2]);
	}
}
