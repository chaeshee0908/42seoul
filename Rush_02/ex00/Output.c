/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunpark <seunpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 13:37:06 by seunpark          #+#    #+#             */
/*   Updated: 2021/03/14 09:50:15 by seunpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "hash.h"

int		ft_cmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	get_first_section(char *str, char *argv, int digit_mod)
{
	if (digit_mod == 1)
	{
		str[0] = '0';
		str[1] = '0';
		str[2] = argv[0];
	}
	else
	{
		str[0] = '0';
		str[1] = argv[0];
		str[2] = argv[1];
	}
	str[DIGIT_SIZE] = '\0';
}

void	print(char *str)
{
	int		cmp_pivot;
	char	*ten;
	char	*one;

	ten = (char*)malloc(sizeof(char) * 2 + 1);
	one = (char*)malloc(sizeof(char) * 1 + 1);

	if (str[0] != '0')
	{
		one[0] = str[0];
		key_search(&one[0]);
		if (key_search(str))
		{
			free(ten);
			free(one);
			return ;
		}
		digit_search(DIGIT_HUNDRED);
	}

	cmp_pivot = PRINT_DIVIDE_PIVOT - str[1];
	if (cmp_pivot <= 0)
	{
		if (str[1] != '0')
		{
			ten[0] = str[1];
			ten[1] = '0';
			key_search(ten);
		}
		if (str[2] != '0')
			key_search(&str[2]);
	}
	else if (str[1] == '1')
	{
		ten[0] = str[1];
		ten[1] = str[2];
		ten[2] = '\0';
		key_search(ten);
	}
	else
	{
		one[0] = str[2]; 
		one[1] = '\0';
		key_search(one);
	}
	free(ten);
			free(one);
}
void	print_argv_in_english(char *argv)
{
	char	*number_section;
	int		argv_digits;
	int		digit_divide;
	int		digit_mod;

	argv_digits = ft_strlen(argv);
	digit_divide = argv_digits / DIGIT_SIZE;
	digit_mod = argv_digits % DIGIT_SIZE;

	number_section = (char*)malloc(sizeof(char) * DIGIT_SIZE + 1);
	number_section[DIGIT_SIZE] = '\0';

	if (digit_mod)
	{
		get_first_section(number_section, argv, digit_mod);
		print(number_section);
		if (digit_divide > 0)
			digit_search(((digit_divide) * DIGIT_SIZE) + 1);
		argv = argv + digit_mod;
	}
	while (digit_divide)
	{
		ft_strncpy(number_section, argv, DIGIT_SIZE);
		if (ft_cmp(number_section, ZERO_STRING))
			print(number_section);
		argv = argv + (sizeof(char) * DIGIT_SIZE);
		if (digit_divide - 1 > 0 && ft_cmp(number_section, ZERO_STRING))
			digit_search((digit_divide - 1) * DIGIT_SIZE + 1);
		digit_divide--;
	}
	write(1, "\n", 1);
	free(number_section);
}
