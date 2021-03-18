/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_buf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:48:09 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 22:48:28 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

int		file_open_sub(char *dict, char *my_dict, int msize)
{
	int	fd;
	int	rt;

	if (!(fd = open(dict, O_RDONLY)))
		return (0);
	rt = read(fd, my_dict, msize);
	close(fd);
	return (1);
}

char	*file_open(char *dict)
{
	int		fd;
	char	buf;
	int		rt;
	int		msize;
	char	*my_dict;

	rt = 1;
	msize = 0;
	if (!(fd = open(dict, O_RDONLY)))
		return (0);
	while (rt != 0)
	{
		rt = read(fd, &buf, 1);
		msize++;
	}
	close(fd);
	if (!(my_dict = (char *)malloc(sizeof(char) * ++msize)))
		return (0);
	if (!(file_open_sub(dict, my_dict, msize)))
		return (0);
	return (my_dict);
}

int		set_key(char **key, char *my_dict)
{
	int	i;
	int	msize;

	i = -1;
	msize = 0;
	while (my_dict[++i] != ':')
		msize++;
	if (!(*key = (char *)malloc(sizeof(char) * ++msize)))
		return (0);
	i = -1;
	while (my_dict[++i] != ':')
		key[0][i] = my_dict[i];
	key[0][i] = '\0';
	return (i);
}

int		set_value(char **value, char *my_dict)
{
	int	i;
	int	msize;

	i = -1;
	msize = 0;
	while (my_dict[++i] != '\n')
		msize++;
	if (!(*value = (char *)malloc(sizeof(char) * ++msize)))
		return (0);
	i = -1;
	while (my_dict[++i] != '\n')
		value[0][i] = my_dict[i];
	value[0][i] = '\0';
	return (i);
}
