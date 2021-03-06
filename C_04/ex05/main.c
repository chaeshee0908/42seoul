int	ft_atoi_base(char *str, char *base);

int	main(int argc, char *argv[])
{
	int	num;

	if (argc == 3)
	{
		num = ft_atoi_base(argv[1], argv[2]);
	}
}
