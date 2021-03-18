/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:48:34 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 23:05:11 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

void	init_hash_table(void)
{
	int	i;

	i = 0;
	while (i < HASH_DIGIT)
		g_hash_table[i] = NULL;
}

int		init_pool(int n_cnt, t_node **pool, t_node **top)
{
	t_node	*r;
	t_node	*s;
	int		i;

	*pool = (t_node *)malloc(sizeof(t_node) * n_cnt);
	if (*pool == 0)
		return (0);
	*top = *pool;
	i = 1;
	r = *pool;
	(*pool)[n_cnt - 1].next = 0;
	while (i < n_cnt)
	{
		s = r++;
		s->next = r;
		i++;
	}
	return (1);
}
