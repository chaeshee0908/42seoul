/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 23:12:19 by schae             #+#    #+#             */
/*   Updated: 2021/03/08 23:12:22 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;

	n = 0;
	while (src[n])
	{
		n++;
	}
	ptr = (char *)malloc(sizeof(char) * n + 1);
	ptr[n] = '\0';
	while (n--)
		ptr[n] = src[n];
	return (ptr);
}
