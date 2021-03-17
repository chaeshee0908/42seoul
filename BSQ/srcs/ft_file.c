/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinseonghee <jinseonghee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:58:43 by jinseonghee       #+#    #+#             */
/*   Updated: 2021/03/17 21:09:10 by jinseonghee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_strcat(char **dest, char *src)
{
	int i;
	int j;

	i = 0;
	while ((*dest)[i])
		i++;
	j = 0;
	while (src[j])
		(*dest)[i++] = src[j++];
	(*dest)[i] = '\0';
	return (j);
}

char	*ft_get_stdin(int size)
{
	int		l_len;
	char	*buf;
	char	*str;

	buf = malloc(sizeof(char) * BUF_SIZE + 1);
	str = malloc(sizeof(char) * BUF_SIZE + 1);
	buf[0] = '\0';
	l_len = read(0, str, BUF_SIZE);
	str[l_len] = '\0';
	while (l_len > 0)
	{
		str[l_len] = '\0';
		size = size + ft_strcat(&buf, str);
		l_len = read(0, str, BUF_SIZE);
	}
	free(str);
	if (size == 0)
	{
		free(buf);
		return (NULL);
	}
	buf[size] = '\0';
	return (buf);
}

char	*get_buf_std(void)
{
	char	*buf;
	char	c;

	c = '!';
	buf = ft_get_stdin(0);
	if (!buf)
		return (NULL);
	if (ft_check_fl(buf, -1, c) != -1)
		return (buf);
	if (buf)
		free(buf);
	return (NULL);
}

char	*get_buf_file(char *path)
{
	char	*buf;
	int		buf_size;
	char	c;

	c = '!';
	buf = get_buf(path);
	if (!buf)
		return (NULL);
	buf_size = ft_check_fl(buf, -1, c);
	if (buf_size == -1)
	{
		free(buf);
		return (NULL);
	}
	return (buf);
}

char	*get_buf(char *path)
{
	int		size;
	int		file;
	char	*buf;

	if (!(buf = malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (0);
	file = open(path, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (NULL);
	}
	size = read(file, buf, BUF_SIZE);
	if (size == -1)
	{
		free(buf);
		return (NULL);
	}
	buf[size] = '\0';
	close(file);
	return (buf);
}
