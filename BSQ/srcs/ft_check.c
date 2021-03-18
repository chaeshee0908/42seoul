/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinseonghee <jinseonghee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:58:33 by jinseonghee       #+#    #+#             */
/*   Updated: 2021/03/17 21:21:48 by jinseonghee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_is_printable(char c)
{
	if (c <= 31 || c == 127)
		return (0);
	return (1);
}

int		ft_overlap(char *buf, int c)
{
	if (buf[c - 1] == buf[c - 2]
	|| buf[c - 1] == buf[c - 3] || buf[c - 2] == buf[c - 3])
		return (0);
	if (buf[c] != '\n')
		return (0);
	return (1);
}

int		ft_eol(char *buf, int start, int nb_lines)
{
	long	i;
	long	j;

	i = 0;
	j = start;
	while (buf[start] != '\n' && buf[start])
	{
		i++;
		start++;
	}
	if (i >= 1 && buf[j - 1] == '\n')
		return (((i + 1) * nb_lines) + (j + 1));
	return (-1);
}

int		ft_check_fl(char *buf, int i, char c)
{
	int		size;
	int		nb_lines;

	if (!buf || !(*buf <= '9' && *buf >= '0'))
		return (-1);
	while (buf[++i] != '\n')
		if (buf[i] == '\0')
			return (-1);
	c = buf[i - 3];
	buf[i - 3] = '\0';
	nb_lines = ft_atoi(buf);
	size = ft_strlen(buf);
	buf[i - 3] = c;
	i = size;
	while (i < size + 3)
		if (!(ft_is_printable(buf[i++])))
			return (-1);
	if (!ft_overlap(buf, i) || ft_eol(buf, i + 1, nb_lines) == -1)
		return (-1);
	return (ft_eol(buf, i + 1, nb_lines));
}
