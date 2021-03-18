/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:47:34 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 23:11:07 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

int		validate_arr(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == '+' || *str == '-')
			str++;
		while ('0' <= *str && *str <= '9')
			str++;
		while (white_space(*str))
			str++;
		if (*(str++) != ':')
			return (0);
		while (white_space(*str))
			str++;
		while (32 <= *str && *str <= 126)
			str++;
		if (*str != '\n')
			return (0);
		count++;
		if (*str == '\0')
			return (count);
		str++;
	}
	return (count);
}

int		valid_argv(char *argv)
{
	while (*argv)
	{
		if (*argv < '0' || *argv > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		argv++;
	}
	return (1);
}


char	*valid_argc(int argc, char *argv[], char **print_number)
{
	char	*my_dict;

	if (!(argc == 2 || argc == 3))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		if (!(valid_argv(argv[1])))
			return (0);
		*print_number = argv[1];
		my_dict = file_open("numbers.dict");
	}
	else
	{
		if (!(valid_argv(argv[1])))
			return (0);
		my_dict = file_open(argv[1]);
		*print_number = argv[2];
	}
	return (my_dict);
}
