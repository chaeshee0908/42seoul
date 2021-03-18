/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:48:43 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 22:48:48 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

int	find_digit(char *c)
{
	int	digit;

	digit = 0;
	while (*c)
	{
		c++;
		digit++;
	}
	return (digit);
}

int	digit_search(int digit)
{
	char	*ret;
	int		i;
	int		answer;

	ret = (char *)malloc(sizeof(char) * (digit + 1));
	if (!ret)
		return (0);
	ret[0] = '1';
	i = 1;
	while (i < digit)
	{
		ret[i++] = '0';
	}
	ret[i] = 0;
	answer = key_search(ret);
	free(ret);
	return (answer);
}

int	key_search(char *c)
{
	t_node	*r;
	int		digit;
	int		result;

	digit = find_digit(c);
	if (digit > 37)
		digit = digit % 37;
	r = g_hash_table[digit];
	while (r)
	{
		result = ft_strcmp(c, r->key);
		if (result == 0)
			break ;
		r = r->next;
	}
	if (r == '\0')
	{
		return (0);
	}
	write(1, r->value, find_digit(r->value));
	return (1);
}
