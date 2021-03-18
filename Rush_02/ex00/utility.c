/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:45:44 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 22:45:57 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	white_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	print_able_without_minus(char c)
{
	return (c > 32 && c <= 126);
}
