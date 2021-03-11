/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:31:27 by schae             #+#    #+#             */
/*   Updated: 2021/03/10 10:59:10 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_valid(char *str)
{
	char	*ptr;
	int i;
	int j;

	ptr = str;
	while (*ptr)
	{
		if (*ptr == '+' || *ptr == '-')
			return (0);
		if (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
			return (0);
		ptr++;
	}
	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (*(str++))
		num++;
	return (num);
}

int	find_base_index(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi(char *str, char *base, int b)
{
	int	result;
	int sign;

	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (find_base_index(*str, base) >= 0)
			result = result * b + find_base_index(*str, base);
		str++;
	}
	return (result * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	b;
	int	nbr;

	if (*base == '\0' || !is_valid(base))
		return (0);
	b = ft_strlen(base);
	nbr = ft_atoi(str, base, b);
	return (nbr);
}
