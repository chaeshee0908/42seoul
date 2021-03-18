/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:59:22 by schae             #+#    #+#             */
/*   Updated: 2021/03/07 10:22:46 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		upper_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		lower_case(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		numeric_case(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_first(char c)
{
	if (upper_case(c) || lower_case(c) || numeric_case(c))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0 && lower_case(str[i]))
			str[i] -= 32;
		else if (is_first(str[i - 1]) && lower_case(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
