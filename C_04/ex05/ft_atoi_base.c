/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:31:27 by schae             #+#    #+#             */
/*   Updated: 2021/03/05 19:31:31 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	b_sign(char *str)
{
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (1);
		str++;
	}
	return (0);
}

int	b_same(char *str)
{
	int i, j;
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	b_space(char *str)
{
	while (*str)
	{
		if (*str == ' ' || (*str >= 9 && *str <= 13))
			return (1);
		str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (1);
		str++;
	}
	return (0);
}

int	ft_atoi(char *str, int b)
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
		result = result * b + *str - '0';
		str++;
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b;
	int	nbr;

	if (*base == '\0' || b_sign(base) || b_same(base) || b_space(base))
		return (0);
	b = ft_strlen(base);
	nbr = ft_atoi(str, b);
	return (nbr);
}
