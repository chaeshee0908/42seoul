/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:47:20 by schae             #+#    #+#             */
/*   Updated: 2021/03/11 19:36:10 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = dest;
	while (*str)
		str++;
	while (*src && i < nb)
	{
		*str = *src;
		str++;
		src++;
		i++;
	}
	*str = '\0';
	return (dest);
}
