/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:30:24 by schae             #+#    #+#             */
/*   Updated: 2021/02/21 10:45:47 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	ft_print_first_line(int x)
{
	ft_putchar('/');
	if (x != 0)
	{
		while (--x)
			ft_putchar('*');
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	ft_print_middle_line(int x)
{
	ft_putchar('*');
	if (x != 0)
	{
		while (--x)
			ft_putchar(' ');
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ft_print_last_line(int x)
{
	ft_putchar('\\');
	if (x != 0)
	{
		while (--x)
			ft_putchar('*');
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	ft_print_first_line(x - 1);
	y--;
	if (y != 0)
	{
		while (--y)
			ft_print_middle_line(x - 1);
		ft_print_last_line(x - 1);
	}
}
