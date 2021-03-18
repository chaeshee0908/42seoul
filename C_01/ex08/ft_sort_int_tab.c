/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 20:27:34 by schae             #+#    #+#             */
/*   Updated: 2021/03/06 20:44:06 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int now;
	int index;
	int min;
	int m_num;

	now = 0;
	index = 0;
	while (now < size)
	{
		index = now + 1;
		min = tab[now];
		while (index < size)
		{
			if (min > tab[index])
			{
				min = tab[index];
				m_num = index;
			}
			index++;
		}
		swap(&tab[now], &tab[m_num]);
		now++;
	}
}
