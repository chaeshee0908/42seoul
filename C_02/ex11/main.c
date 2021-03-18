void	ft_putstr_non_printable(char *str);

int main()
{
	char str[] = "\n\xad\x7f\xff ab\x00";

	ft_putstr_non_printable(str);
}
