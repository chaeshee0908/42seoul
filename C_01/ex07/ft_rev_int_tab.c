/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:27:04 by schae             #+#    #+#             */
/*   Updated: 2021/02/25 17:23:45 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int left;
	int right;
	int temp;
	int m;
	int i;

	i = 0;
	left = 0;
	right = size - 1;
	m = size / 2;
	while (i < m)
	{
		temp = tab[left + i];
		tab[left + i] = tab[right - i];
		tab[right - i] = temp;
		i++;
	}
}
