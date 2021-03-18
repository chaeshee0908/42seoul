/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:47:48 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 23:10:47 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

char	*ft_trim_malloc(char *str)
{
	int		i;
	int		msize;
	char	*rt;

	msize = 0;
	i = 0;
	while (white_space(str[i]))
		i++;
	while (str[i])
	{
		if (white_space(str[i]) && white_space(str[i + 1]))
		{
			i++;
			continue ;
		}
		msize++;
		i++;
	}
	if (!(rt = (char *)malloc(sizeof(char) * ++msize)))
		return (0);
	return (rt);
}

char	*ft_trim(char *str)
{
	int		i;
	char	*rt;

	if (!(rt = ft_trim_malloc(str)))
		return (0);
	i = -1;
	while (*str)
	{
		if (white_space(*str) && (white_space(*(str + 1)) || *(str + 1)))
		{
			str++;
			continue ;
		}
		else if (white_space(*str) && print_able_without_minus(*(str + 1)))
			rt[++i] = ' ';
		rt[++i] = *str;
		str++;
	}
	rt[++i] = '\0';
	return (rt);
}
