void	ft_putnbr_base(int nbr, char *base);

int main()
{
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putnbr_base(-123456, "helo");
	ft_putnbr_base(97, "poneyvif");
	ft_putnbr_base(97, "Hello");
	ft_putnbr_base(97, "+dgs");
	ft_putnbr_base(97, "0123456");
	ft_putnbr_base(-97, "01234567");
	ft_putnbr_base(97, "0123456789zxcvbnmasdfghjklqwertyuiop");
	ft_putnbr_base(255, "giro");
}
