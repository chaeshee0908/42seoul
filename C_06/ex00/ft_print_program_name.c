/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schae <schae@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 20:22:50 by schae             #+#    #+#             */
/*   Updated: 2021/03/12 23:55:07 by schae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc--;
	while (*argv[argc])
	{
		write(1, argv[argc], 1);
		argv[argc]++;
	}
	write(1, "\n", 1);
	return (0);
}
