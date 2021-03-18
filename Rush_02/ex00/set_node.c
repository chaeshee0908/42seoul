/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:46:59 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 23:10:04 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

t_node	*new_node(t_node **top)
{
	t_node	*r;

	if (*top == 0)
		return (0);
	r = *top;
	*top = r->next;
	return (r);
}

void	free_node(t_node *r, t_node **top)
{
	r->next = *top;
	*top = r;
}

t_node	*make_node(char *my_dict, int *i, t_node **top)
{
	t_node	*n;
	char	*key;
	char	*value;
	int		set_rt;

	if (!(n = new_node(top)))
		return (0);
	if (!(set_rt = set_key(&key, &my_dict[*i])))
		return (0);
	*i += set_rt + 1;
	set_rt = 0;
	if (!(set_rt = set_value(&value, &my_dict[*i])))
		return (0);
	*i += set_rt;
	n->key = ft_trim(key);
	n->value = ft_trim(value);
	free(key);
	free(value);
	return (n);
}

void	add_node(char *my_dict, int n_cnt, t_node *top)
{
	int		i;
	int		k;
	t_node	*temp;

	i = 0;
	k = -1;
	while (++k < n_cnt)
	{
		temp = make_node(my_dict, &i, &top);
		add(temp, find_digit(temp->key));
	}
}

void	add(t_node *n, int digit)
{
	t_node	*r;

	r = g_hash_table[digit];
	n->next = r;
	r = n;
	g_hash_table[digit] = r;
}
