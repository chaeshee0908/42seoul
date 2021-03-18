/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 22:46:51 by schae             #+#    #+#             */
/*   Updated: 2021/03/14 23:11:45 by yejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hash.h"

void	m_free(t_node **top)
{
	t_node	*r;
	t_node	*p_r;
	int		i;

	i = 0;
	while (i < HASH_DIGIT)
	{
		r = g_hash_table[i];
		while (r)
		{
			p_r = r;
			r = r->next;
			free(p_r->key);
			free(p_r->value);
			g_hash_table[i] = r;
			free_node(p_r, top);
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	char	*my_dict;
	int		n_cnt;
	char	*print_number;
	t_node	*pool;
	t_node	*top;

	if (!(my_dict = valid_argc(argc, argv, &print_number)))
		return (0);
	if (!my_dict || !(n_cnt = validate_arr(my_dict)))
	{
		free(my_dict);
		write(1, "Dict Error\n", 11);
		return (0);
	}
	if (!(init_pool(n_cnt, &pool, &top)))
		return (0);
	add_node(my_dict, n_cnt, top);
	print_argv_in_english(print_number);
	m_free(&top);
	free(my_dict);
	free(pool);
	system("leaks rush-02 > leaks_result; cat leaks_result | grep leaked && rm "
			"-rf leaks_result");
}
