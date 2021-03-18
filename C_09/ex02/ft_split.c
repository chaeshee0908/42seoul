/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:22:31 by schae             #+#    #+#             */
/*   Updated: 2021/03/18 19:33:04 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

long long	get_word_cnt(char *str, char *charset)
{
	long long cnt;

	cnt = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			++cnt;
			while (*str && !is_in_charset(*str, charset))
				++str;
		}
		++str;
	}
	return (cnt);
}

void		ft_strcpy(char *dst, char *start, char *end)
{
	while (start < end)
		*(dst++) = *(start++);
	*dst = 0;
}

char		**ft_split(char *str, char *charset)
{
	char		**ret;
	long long	i;
	char		*start;

	if (!(ret = (char**)malloc(sizeof(char*) * get_word_cnt(str, charset) + 1)))
		return (0);
	i = 0;
	while (*str)
	{
		if (!is_in_charset(*str, charset))
		{
			start = str;
			while (*str && !is_in_charset(*str, charset))
				++str;
			ret[i] = (char*)malloc(str - start + 1);
			ft_strcpy(ret[i++], start, str);
		}
		++str;
	}
	ret[i] = 0;
	return (ret);
}
